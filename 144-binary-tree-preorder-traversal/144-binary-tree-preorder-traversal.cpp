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
    void helper(TreeNode*root,vector<int>& in)
    {
        if(root==NULL) return;
        in.push_back(root->val);
        helper(root->left,in);
        helper(root->right,in);
        
        
    }
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> in;
        helper(root,in);
        return in;
    }
};