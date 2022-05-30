class Solution {
public:
    bool findRotation(vector<vector<int>>& mat, vector<vector<int>>& target) {
        
        int n=mat.size();
        if(mat == target)   
            return true;
        
        
        int degree=3;       //checking for 90, 180 and 270 well
        while(degree --) 
        {
            for(int i = 0; i < n; i ++) 
                for(int j = i; j < n; j ++) 
                    swap(mat[i][j], mat[j][i]);     // transpose of matrix.
             
            for(int i = 0; i < n; i ++) 
                reverse(mat[i].begin(),mat[i].end());       // reverse each row.
            
            if(mat == target)
                return true;
            
        }
        return false;
    }
};