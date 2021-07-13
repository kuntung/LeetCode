#include "Solution.h"
#include "STOCK.h"
#include <iostream>
#include <string>
#include <typeinfo>
#include <vector>
#include <algorithm>
#include <numeric>
#include <functional>
#include <cstring>

using namespace std;

void testSTOCK()
{
    Stock stock;
    vector<int> prices{7,1,5,3,6,4};
    stock.maxProfit(prices);
    cout << "build bad!" <<endl;
}


void testIntMod()
{
    int x = -123;
    cout << x%10 << endl;
}


int main(int argc, char** argv)
{
    Solution* test_solution = new Solution();

    // 和相同的二元子数组
    vector<int> nums = {1, 0, 1, 0, 1};
    test_solution->numSubarraysWithSum(nums, 2);
    // 错误的集合
    // vector<int> nums = {2, 3, 2};
    // test_solution->findErrorNums(nums);

    // // 877. 石子游戏
    // vector<int> piles = {5, 3, 4, 5};

    // test_solution->stoneGame(piles);

    //525.连续数组
    // vector<int> nums = {0,1,0};
    // test_solution->findMaxLength(nums);

    // //连续的子数组和
    // vector<int> nums{23, 2, 4, 6, 6};

    // test_solution->checkSubarraySum(nums, 7);

    // //找出第K大的异或坐标值
    // vector<vector<int>> matix = {{10,9,5},{2,0,4},{1,0,9},{3,4,8}};
    // test_solution->kthLargestValue(matix, 10);
    // //形成两个异或相等数组的三元组数目
    // vector<int> nums  ={1,1,1,1,1};
    // test_solution->countTriplets(nums);

    //前k个高频词代码测试
    // vector<string> words = {"i", "love", "leetcode", "i", "love", "coding"};
    // test_solution->topKFrequent(words, 2);
    // TreeNode* left = new TreeNode(2, nullptr, new TreeNode(4)); 
    // TreeNode* right = new TreeNode(3, nullptr, new TreeNode(5));
    // TreeNode* root = new TreeNode(1, left, right);

    // TreeNode* left = new TreeNode(2, new TreeNode(4), nullptr); 
    // TreeNode* right = new TreeNode(3);
    // TreeNode* root = new TreeNode(1, left, right);

    // test_solution->isCousins(root, 4, 3);
    // test_solution->reverse(int(-123)); //整数反转
    // // testSTOCK();
    // testIntMod();

    // vector<int> coins{186, 419, 83, 408};
    // test_solution->coinChange(coins, 6249);

    // test_solution->integerBreak(8); //整数拆分
    // test_solution->judgeSquareSum(4);


    // TreeNode* left = new TreeNode(1); 
    // TreeNode* right = new TreeNode(4, new TreeNode(3), nullptr);
    // TreeNode* root = new TreeNode(2, left, right);

    // TreeNode* temp = test_solution->increasingBST(root);

    // vector<int> nums{1,3,4,2,2};
    // test_solution->findDuiplicate(nums); //寻找重复数
    
    // string s = "solution";
    // string res = test_solution->longestPalindrome(s);

    // TreeNode* left = new TreeNode(2, new TreeNode(1), new TreeNode(3));
    // TreeNode* right = new TreeNode(6);
    // TreeNode* root = new TreeNode(4, left, right);

    // test_solution->withPreNode(root);
    // test_solution->printVec();
    // vector<int> v{10,2,11,3,6};
    // test_solution->largestNumber(v); //最大数

    // test_solution->nthUglyNumber(10); //第10个丑数

    // vector<int> answers = {0, 0, 1, 1, 1};
    // int res = test_solution->numRabbits(answers);

    // cout << res << endl;

    //走钢丝代码测试
        // deque<int> min_num1 = {10, 1, 2, 5};
        // int res1 = test_solution->findMinTime(min_num1);
        // cout << res1 << endl;
        // deque<int> min_num2 = {10, 1, 2, 7, 5}; //2 + 1 + 10 + 2 + 2 + 1 + 5 = 23
        // int res2 = test_solution->findMinTime(min_num2);
        // cout << "namespace test" << endl;

    // }
    
    // vector<int> tree{5,4,3,2,1};
    // test_solution->myVerify(tree, 0, 4);


    // testMKAverage();    //周赛test

    return 0;
}