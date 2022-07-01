class Solution {
public:
    bool hasPathSum(TreeNode* root, int sum) {
        if(root==NULL)return false;                                         //Terminating Condition
        sum=sum-root->val;                                             //Body
        if(sum==0&&root->left==NULL&&root->right==NULL)return true;              //body
        return hasPathSum(root->left,sum)||hasPathSum(root->right,sum);//Propagation
    }
};