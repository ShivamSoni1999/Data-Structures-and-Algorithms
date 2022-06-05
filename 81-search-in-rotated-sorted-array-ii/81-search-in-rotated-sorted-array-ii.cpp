class Solution {
public:
    bool search(vector<int>& nums, int target) {
        int n=nums.size();
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
        for(int i=0;i<n;i++)
        {
            if(nums[i]==target)
                return true;
        }
        return false;
    }
};