class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
        int n = grid.size() , m =grid[0].size();
        
        k %=(n*m); // avoid overhead loop if k>=(n*m)
        
        vector<int>arr;
        for(auto v:grid) // extracting elements into 1d vector
            for(int i:v)
                arr.push_back(i);
        
        reverse(arr.begin(),arr.end()); //reverse whole array
        reverse(arr.begin(),arr.begin()+k); //reverse first kth elements
        reverse(arr.begin()+k,arr.end()); // revserse rest m*n-k elements
        
        
        for(int i=0,k=0;i<n;i++)    //pushing back the elements into 2d array
            for(int j=0;j<m;j++)
                grid[i][j] = arr[k++];
                
        return grid;
    }
};