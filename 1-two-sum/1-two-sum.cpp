class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        int n=nums.size();     // O(N),O(N) sol
        vector<int> ans;
        unordered_map<int, int> umap;

        for(int i=0;i<=n;i++)
        {
            int rem_value=target-nums[i];
            if(umap.find(rem_value)!=umap.end()) //if this is true then I got the value in hashmap
            {
                ans.push_back(umap[rem_value]); //pushing value in ans vector
                ans.push_back(i);               //pushing index too
                return ans;
            }
            else
                umap[nums[i]] = i;              //storing value and index if no value found in hashmap
                
        }
        
        return ans;
    
    }
};