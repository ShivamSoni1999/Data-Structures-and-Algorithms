class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        int n=nums.size();
        unordered_map<int,int> umap;
        vector<int> arr;
        for(auto i:nums)
        {
            umap[i]++;
        }
        for(auto itr:umap)
        {
            if(itr.second==1)
                arr.push_back(itr.first);
        }
        return arr;
    }
};