#include<iostream>
#include <vector>
#include <algorithm>
#include <cstring>

using namespace std;

class Solution {
public:
    vector<int> jobs;
    int n, k;
    int ans = 0x3f3f3f3f;
    int minimumTimeRequired(vector<int>& _jobs, int _k) {
        jobs = _jobs;
        n = jobs.size();
        k = _k;
        int sum[k]; //统计工人的当前工作量
        memset(sum, 0, sizeof(sum));
        dfs(0, 0, sum, 0);
        return ans;
    }
    /**
     * 【补充说明】不理解可以看看下面的「我猜你问」的 Q5 哦 ~
     * 
     * u     : 当前处理到那个 job
     * used  : 当前分配给了多少个工人了
     * sum   : 工人的分配情况          例如：sum[0] = x 代表 0 号工人工作量为 x
     * curMax   : 当前的「最大工作时间」
     */
    void dfs(int u, int used, int sum[], int curMax) {
        if (curMax >= ans) return; //剪枝，直接去掉不符合条件的值
        if (u == n) { //更改当前的最大值
            ans = curMax;
            return;
        }
        // 优先分配给「空闲工人」
        if (used < k) {
            sum[used] = jobs[u];
            dfs(u + 1, used + 1, sum, max(sum[used], curMax)); 
            sum[used] = 0; //回溯，不要也可以
        }
        for (int i = 0; i < used; i++) {
            sum[i] += jobs[u];
            dfs(u + 1, used, sum, max(sum[i], curMax));
            sum[i] -= jobs[u]; //回溯
        }
    }
};

void test() {

    Solution s;
    vector<int> testjob{1,2,4,7,8};
    cout << s.minimumTimeRequired(testjob, 2);

    return;
}

int main()
{
    test();

    return 0;
}