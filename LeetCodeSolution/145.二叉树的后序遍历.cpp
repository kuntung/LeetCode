/*
 * @lc app=leetcode.cn id=145 lang=cpp
 *
 * [145] 二叉树的后序遍历
 */

// @lc code=start
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<int> postorderTraversal(TreeNode* root) {
        //  myPostorder(root, res); //递归实现
      return  myPostorderIter(root);
         
    }
private:
    vector<int> res;
    void myPostorder(TreeNode* root, vector<int>& res){
        //后续遍历实现
        if(root == nullptr) return;
        if(root->left)
        myPostorder(root->left, res); //遍历左子树
        if(root->right)
        myPostorder(root->right, res); //遍历右子树
        res.push_back(root->val);

    }
    //层序遍历的倒序
    vector<int> myPostorderIter(TreeNode* root)
    {
        //迭代实现
        if (!root) return {};
        vector<int> vec;
        stack<TreeNode *> stk;
        TreeNode *prev = nullptr;
        auto node = root;
        while (!stk.empty() || node) {
            // 1.遍历到最左子节点
            while (node) {
                stk.emplace(node);
                node = node->left;
            }
            node = stk.top(); stk.pop();
            // 2.遍历最左子节点的右子树(右子树存在 && 未访问过)
            if (node->right && node->right != prev) {
                // 重复压栈以记录当前路径分叉节点
                stk.emplace(node);
                node = node->right;      
            } else {
                // 后序：填充vec在node->left和node->right后面
                // 注意：此时node的左右子树应均已完成访问
                vec.emplace_back(node->val);
                // 避免重复访问右子树[记录当前节点便于下一步对比]
                prev = node;
                // 避免重复访问左子树[设空节点]
                node = nullptr;
            }
        }
        return vec;
    }
};
// @lc code=end

