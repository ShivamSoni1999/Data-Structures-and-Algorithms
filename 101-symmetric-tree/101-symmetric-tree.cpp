class Solution {
public:
	bool isSymmetric(TreeNode* root) {
		return (root==NULL || isSymmetricHelp(root->left,root->right));
	}
	bool isSymmetricHelp(TreeNode*left,TreeNode*right){
		if(left==NULL || right==NULL)
			return left==right;
		if(left->val != right->val)
			return false;
		return (isSymmetricHelp(left->left,right->right) //simulteneously checking left right and right left
                    && 
               isSymmetricHelp(left->right,right->left));
	}
};