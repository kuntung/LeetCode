#include "Solution.h"

using namespace std;

char Solution::firstUniqChar(string s)
{
    if (s.empty())
        return ' ';
    vector<int> res = vector<int>(26, -1); //这里必须初始化
    int len = s.length();
    for (int i = 0; i < len; i++)
    {
        if (res[s[i] - 'a'] == -1)
            res[s[i] - 'a'] = i;
        else
            res[s[i] - 'a'] = len;
    }
    int target_index = 26;
    // for_each(res.begin(), res.end(), [&target_index](int x){target_index = min(target_index, x);});
    for (int i = 0; i < res.size(); i++)
    {
        if (res[i] == -1)
            continue;
        if (res[i] < len)
        {
            target_index = i;
            len = res[target_index];
        }
    }
    if (target_index == 26)
        return ' ';
    char res_ch = char('a' + target_index);
    return res_ch;
}

int Solution::numRabbits(vector<int> &answers)
{
    if (answers.size() == 0)
        return 0;
    map<int, int> mp;
    int res = 0;
    for (int i : answers)
    {
        if (i == 0)
            res++;
        else
            mp[i]++;
    }
    for_each(mp.begin(), mp.end(), [&res](map<int, int>::value_type x) {
            int temp = x.first+1;
            res += temp*ceil((float)x.second/(float)temp); });

    return res;
    // //O(1)空间复杂度实现
    // sort(answers.begin(), answers.end());
    //     int n = answers.size();
    //     int ans = 0;
    //     for(int i = 0; i < n; i++) {
    //         int cnt = answers[i];
    //         ans += cnt + 1;
    //         // 跳过「数值 cnt」后面的 cnt 个「数值 cnt」
    //         int k = cnt;
    //         while (k-- && i+1 < n && answers[i] == answers[i+1])
    //             i++;
    //     }
    //     return ans;
}

//调整数组顺序使奇数位于偶数前面
vector<int> Solution::exchange(vector<int> &nums)
{
    //双指针？
    int left = 0, right = nums.size() - 1;
    // vector<int> res(right + 1, 0);
    while (left <= right)
    {
        while (nums[left] & 1 == 1 && left <= right)
        {
            left++;
        }
        if (left > right)
            break;
        int temp = nums[right] & 1;
        while (temp == 0 && left <= right)
        {
            right--;
            temp = nums[right] & 1;
        }
        if (left <= right)
            swap(nums[left], nums[right]);
        else
            break;
    }

    return nums;
}

TreeNode *Solution::solve(TreeNode *root)
{
    if (root == nullptr)
        return root;
    deque<TreeNode *> dq;
    dq.push_back(root);
    TreeNode *tempNode = nullptr;
    while (!dq.empty())
    {
        tempNode = dq.front();
        if (tempNode->left && tempNode->right)
        {
            dq.push_back(tempNode->left);
            dq.push_back(tempNode->right);
        }
        else
        {
            tempNode->left = nullptr;
            tempNode->right = nullptr;
            break;
        }
    }
    return root;
}

//腾讯笔试第三题，过钢丝问题
int Solution::findMinTime(deque<int> &nums)
{
    /*
    /对于给定的一个数组，数组元素表示通过钢丝要的时间，稳定不变。
    /但是只有一根平衡棍，每次只能两个人通过，时间取较大者。
    /要点：需要有一个人走回来还木棒
    */
    //测试样例
    //1. [10, 1, 2, 5] output: 2+1+10+2+2
    deque<int> arrive;
    if (nums.empty())
        return 0;
    int res = 0;
    while (nums.size() > 2)
    {
        sort(nums.begin(), nums.end());
        if (arrive.empty())
        {
            int cur1 = nums.front();
            nums.pop_front();
            int cur2 = nums.front();
            nums.pop_front();
            res += max(cur1, cur2);
            arrive.push_back(cur1);
            arrive.push_back(cur2);
        }
        else
        {
            sort(arrive.begin(), arrive.end());
            int cur1 = nums.back();
            nums.pop_back();
            int cur2 = nums.back();
            nums.pop_back();
            res += max(cur1, cur2);
        }
        int back = arrive.front();
        arrive.pop_front();
        res += back;
        nums.push_front(back);
    }
    res += max(nums.front(), nums.back());

    return res;
}

//删除排序数组中的重复项
int Solution::removeDuplicates(vector<int> &nums)
{
    int unique = nums[0];
    int cnt_unique = 1;
    vector<int>::iterator it = nums.begin() + 1;
    while (it != nums.end())
    {
        while (it != nums.end() && *it == unique && *(it + 1) == unique)
        {
            it = nums.erase(it);
        }
        if (it == nums.end())
            return nums.size();
        else
            it++;
        if (it != nums.end())
        {
            unique = *it;
            it++;
        }
    }
    return nums.size();
}

//搜索旋转排序树组II
bool Solution::search(vector<int> &nums, int target)
{
    //二分查找法
    int start = 0;
    int end = nums.size();
    int mid;
    while (start < end)
    {
        mid = start + (end - start) / 2;
        if (nums[mid] == target)
        {
            return true;
        }
        if (nums[start] == nums[mid])
        {
            start++;
            continue;
        }
        //前半部分有序
        if (nums[start] < nums[mid])
        {
            //target在前半部分
            if (nums[mid] > target && nums[start] <= target)
            {
                end = mid;
            }
            else
            { //否则，去后半部分找
                start = mid + 1;
            }
        }
        else
        {
            //后半部分有序
            //target在后半部分
            if (nums[mid] < target && nums[end] >= target)
            {
                start = mid + 1;
            }
            else
            { //否则，去后半部分找
                end = mid;
            }
        }
    }
    //一直没找到，返回false
    return false;
}

//寻找旋转排序数组的最小元素
int Solution::findMin(vector<int> &nums, int target)
{
    // //暴力解法
    // int res = 5000;
    // for(int i: nums){
    //     res = min(res, i);
    // }

    // return res;
    //二分查找法
    int left = 0, right = nums.size() - 1;
    int mid = 0, minNum = 5000;
    while (left <= right)
    {
        mid = left + (right - left) / 2;
        minNum = min(minNum, nums[mid]);
        if (nums[mid] < nums[right]) //前半部分有序
        {
            right = mid - 1;
        }
        else
        {
            left = mid + 1;
        }
    }

    return minNum;
}

//搜索旋转数组，返回target第一次出现的位置，否则返回-1
int Solution::searchFirst(vector<int> &arr, int target)
{
    int left = 0, right = arr.size() - 1;
    int mid = 0;
    while (left <= right)
    {
        mid = left + (right - left) / 2;
        if (arr[mid] == target)
            return mid;
        if (arr[mid] == arr[left])
        {
            left++;
            continue;
        }
        if (arr[mid] > arr[left]) //前半段有序
        {
            if (arr[mid] > target && target >= arr[left])
                right = mid - 1;
            else
                left = mid + 1;
        }
        else
        {
            //后半段有序
            if (arr[mid] < target && target <= arr[right])
                left = mid + 1;
            else
                right = mid - 1;
        }
    }

    return -1;
}

//搜索元素第一次和最后一次出现的位置
vector<int> Solution::searchRange(vector<int> &nums, int target)
{
    int left = 0, right = nums.size() - 1;
    int mid = 0;
    int low = -1, high = -1;
    while (left <= right)
    {
        mid = left + (right - left) / 2;
        if (nums[mid] == target)
            right = mid - 1;
        else if (nums[mid] > target)
            right = mid - 1;
        else if (nums[mid] < target)
            left = mid + 1;
    }
    if (left < nums.size() && nums[left] == target)
        low = left;
    left = 0;
    right = nums.size() - 1;
    while (left <= right)
    {
        mid = left + (right - left) / 2;
        if (nums[mid] == target)
            left = mid + 1;
        else if (nums[mid] > target)
            right = mid - 1;
        else if (nums[mid] < target)
            left = mid + 1;
    }
    if (right >= 0 && nums[right] == target)
        high = right;

    return {low, high};
}

//二叉搜索树的后序遍历序列
bool Solution::myVerify(vector<int>& postorder, int start, int end)
{
    //判断子树是否是二叉搜索树的后续遍历
    if(end - start <= 1) return true;
    int root = postorder[end];
    //得到左子树的最后一个节点位置
    int subLeftRoot = start;
    int subRight = start;
    for(; subLeftRoot < end; subLeftRoot++)
    {
        if(postorder[subLeftRoot] > root){
            break;
        }
    }
    int max_Left = INT_MIN;
    int min_Right = INT_MAX;
    if(--subLeftRoot>=0){
        int max_Left = *max_element(postorder.begin() + start, postorder.begin() + subLeftRoot + 1);
    }
    subRight = subLeftRoot + 1; //得到理论上右子树的第一个节点
    if(end - subLeftRoot + 1>0) 
    {min_Right = *min_element(postorder.begin() + subRight, postorder.begin() + end);}  //左闭右开
    if(max_Left > root || min_Right < root)
    {
        return false;
    }
    else 
    return myVerify(postorder, start, subLeftRoot)&&myVerify(postorder, subLeftRoot+1, end - 1);

}

//第n个丑数
int Solution::nthUglyNumber(int n) {
    //最大堆法
    // priority_queue <double,vector<double>,greater<double> > q;
    // double answer=1;
    // for (int i=1;i<n;++i)
    // {
    //     q.push(answer*2);
    //     q.push(answer*3);
    //     q.push(answer*5);
    //     answer=q.top();
    //     q.pop();
    //     while (!q.empty() && answer==q.top())
    //         q.pop();
    // }
    // return answer;
    // //采用set去重的方法
    // priority_queue <double,vector<double>,greater<double> > q;
    // set<int> s;
    // s.insert(1);
    // vector<int> mask({2,3,5});
    // double answer=1;
    // for (int i=1;i<n;++i)
    // {
    //     for (int &j:mask)
    //         if (s.count(answer*j)==0)
    //         {
    //             q.push(answer*j);
    //             s.insert(answer*j);
    //         }
    //     answer=q.top();
    //     q.pop();
    // }
    // return answer;
    // //优化：直接采用set
    // set<double> s;  // set 是有序的，且不重复
    // double answer = 1;
    // for (int i = 1; i < n; i++) {
    //     s.insert(answer * 2);
    //     s.insert(answer * 3);
    //     s.insert(answer * 5);
    //     answer = *s.begin();
    //     s.erase(answer);
    // }
    // return answer;

    //三指针解法
    int p2 = 0, p3 = 0, p5 = 0;
    vector<double> res(n, 0);
    res[0] = 1;
    for(int i = 1; i < n; i++)
    {
        double arr[] = {2*res[p2], 3*res[p3], 5*res[p5]};
        int temp = int(*min_element(arr, arr+3));
        res[i] = temp;
        if(temp == arr[0]) p2++;
        if(temp == arr[1]) p3++;
        if(temp == arr[2]) p5++;
    }

    return res[n-1];
}

//判断平衡二叉树
bool Solution::isBalanced(TreeNode* root){
    return abs(getHeight(root->left) - getHeight(root->right) <= 1) && isBalanced(root->left) && isBalanced(root->right);
}
//获取树的深度
int Solution::getHeight(TreeNode* root) //获取子树的最大深度
{
    if(!root) return 0;
    return 1 + max(getHeight(root->left), getHeight(root->right));
}
//最大数
string Solution::largestNumber(vector<int>& nums)
{
    sort(nums.begin(), nums.end(), [](int& a, int& b){
        return to_string(a)+to_string(b) < to_string(b)+to_string(a); 
        //仿函数写法，将数字从大大小排列
    });
    string s;
    if(*nums.rbegin() == 0) return "0";
    for_each(nums.rbegin(), nums.rend(), [&s](int& i){ s+= to_string(i);});
    return s;
}