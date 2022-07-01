class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        if(root==NULL) return ans;
        queue<TreeNode*> q;
        q.push(root);
        bool leftToRight=true;                //flag=0 means L to R and 1 means R to L(Insert in reverse order)
        while(!q.empty())
        {
            int size=q.size();
            vector<int> row(size);
            for(int i=0;i<size;i++)
            {
                TreeNode* node=q.front();
                q.pop();
                //find position to fill nodes value
                int index=(leftToRight) ? i : (size-1-i);//strat from end idx reverse
                row[index]=node->val;
                if(node->left!=NULL) q.push(node->left);
                if(node->right!=NULL) q.push(node->right);
                
            }
            //after this traversal
            leftToRight=!leftToRight; //negate
            ans.push_back(row);
        }
        return ans;
    }
};