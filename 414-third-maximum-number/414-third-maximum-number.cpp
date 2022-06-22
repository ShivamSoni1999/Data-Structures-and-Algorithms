class Solution {
public:
    int thirdMax(vector<int>& nums) {
        
        vector<int> ans;
        map<int,int>u;
        
        for(auto i : nums)
            u[i]++;
        
        
        for(auto i : u)
            ans.push_back(i.first);
        
        
        int n = ans.size();
        
       return (n<3)? ans[n-1] : ans[n-3];
        
        
    }
};