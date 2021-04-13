/*
 * @lc app=leetcode.cn id=80 lang=cpp
 *
 * [80] 删除排序数组中的重复项 II
 */

// @lc code=start
class Solution {
public:
    int work(vector<int>& nums, int k) {
        int len = 0;
        for(auto num : nums)
            if(len < k || nums[len-k] != num)
                nums[len++] = num;
        return len;
    }

    int myRemove(vector<int>& nums, int k){
        // int cnt = 0;
        // auto iter1 = nums.begin();
        //     for(; iter1 != nums.end(); iter1 ++){
        //         int startNum = *iter1;
        //         cnt = 1;
        //         while(cnt < k && iter1 != nums.end()){
        //             iter1++;
        //             cnt++;
        //         }
        //         while(iter1 != nums.end() && *iter1 == startNum){
        //             nums.erase(iter1);
        //             iter1--;
        //         }
        //     }
        // return nums.size();
    }
    int removeDuplicates(vector<int>& nums) {
        return work(nums, 2);
        // return myRemove(nums, 2);
    }
};

// @lc code=end

