class Solution {
private:
    int res;
public:
    int Solve(TreeNode* root) {
        if (root == NULL)
            return 0;

        int l = Solve(root->left);
        int r = Solve(root->right);

        int temp = 1 + max(l, r);        //if currunt node doesn't want to be part of the answer
        res = max(res, l + r + 1);       //if cur node wants to be answer
        return temp;
    }
    int diameterOfBinaryTree(TreeNode* root) {
        if (root == NULL)
            return 0;

        res = INT_MIN + 1;
        int x=Solve(root);
        return res - 1;
    }
};