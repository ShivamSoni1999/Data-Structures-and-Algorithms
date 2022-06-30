 class Solution {
 public:
     vector<int> inorderTraversal(TreeNode* root){ 
         if(root==NULL)
            return {};
         vector<int> inorder;
         stack<TreeNode*> s;
         TreeNode* node=root;
         while(true){
             if(node!=NULL){
                s.push(node);
                node=node->left; 
             }
             else{
                 if(s.empty())
                     break;
                 node=s.top();
                 s.pop();
                 inorder.push_back(node->val);
                 node=node->right;
             }
         }
         return inorder;
     }
 };