class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int n = nums.size();
       
         unordered_map<int,int> umap;
        for(auto i:nums)
        {
            umap[i]++;
        }
        for(auto itr:umap)
        {
            if(itr.second==1)
            {
                return itr.first;
            }
                
        }
           return 0; 
        
        
        
    }
};