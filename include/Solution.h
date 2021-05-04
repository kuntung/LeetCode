#pragma once
#include <vector>
#include <map>
#include <deque>
#include <stack>
#include <iostream>
#include <string>
#include <algorithm>
#include <numeric>
#include <cmath>
#include <set>
#include <queue> //使用优先队列
#include <string>
#include <unordered_map>
using namespace std;

// bool largestNumber()

struct TreeNode {
     int val;
     TreeNode *left;
     TreeNode *right;
     TreeNode() : val(0), left(nullptr), right(nullptr) {}
     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

// Definition for Employee.
class Employee {
public:
    int id;
    int importance;
    vector<int> subordinates;
};

class Solution
{
public:
    char firstUniqChar(string s); 
    int numRabbits(vector<int>& answers);
    vector<int> exchange(vector<int>& nums);
    TreeNode* solve(TreeNode* root); //腾讯笔试第一题，生成完全二叉树
    int findMinTime(deque<int>& nums); //腾讯笔试第三题：过钢丝问题
    int removeDuplicates(vector<int>& nums); //删除排序数组中的重复项II
    bool search(vector<int>& nums, int target); //搜索旋转排序数组II
    int findMin(vector<int>& nums, int target); //寻找旋转排序数组的最小元素
    int searchFirst(vector<int>& arr, int target); //搜索旋转数组，返回第一次出现的位置
    vector<int> searchRange(vector<int>& nums, int target); //搜索元素第一次和最后一次出现的位置
    bool myVerify(vector<int>& postorder, int start, int end); //二叉搜索树的后序遍历序列
    int nthUglyNumber(int n); //第n个丑数
    bool isBalanced(TreeNode* root); //判断平衡二叉树
    int getHeight(TreeNode* root); //获取子树的最大深度
    string largestNumber(vector<int>& nums); //最大数
    void myBackorder(TreeNode* root); //二叉树的右根左遍历序列
    int withPreNode(TreeNode* root); //记录节点的操作
    string longestPalindrome(string s); //最长回文子串
    int findDuiplicate(vector<int>& nums); //寻找重复数
    TreeNode* increasingBST(TreeNode* root); //递增顺序搜索树
    bool judgeSquareSum(int c); //平方数之和
    int integerBreak(int n); //整数拆分
    int coinChange(vector<int>& coins, int amount); //零钱兑换
    int getImportance(vector<Employee*> employees, int id); //员工的重要性
    int reverse(int x); //整数反转

public:
    void printVec()
    {
        for(int i:res)
        {
            cout << i << ", ";
        }
        cout << endl;
    }

    void inOrder(TreeNode* root)
    {
        if(!root) return;
        inOrder(root->left);
        dq.push_back(root);
        inOrder(root->right);
    }

    void printInorder()
    {
        for(auto& node : dq)
        {
            cout << node->val << " ";
        }
    }
private:
    vector<int> res;
    deque<TreeNode*> dq;
    unordered_map<int, Employee*> mp;
};