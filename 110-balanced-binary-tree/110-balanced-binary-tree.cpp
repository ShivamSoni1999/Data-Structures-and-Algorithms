class Solution {
public:
    bool isBalanced(TreeNode* root) {
        if(root == nullptr)
            return true;
        else{
            int leftH = height(root->left);
            int rightH = height(root->right);
            int diff = abs(rightH - leftH);
            return diff <= 1 && isBalanced(root->left) && isBalanced(root->right);   
        } 
    }
    int height(TreeNode* root){
        if(root == NULL){
            return 0;
        }else{
            return 1 + max(height(root->left), height(root->right));
        }
    }
};