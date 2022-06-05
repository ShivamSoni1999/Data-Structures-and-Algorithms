class Solution {
public:
    int findMin(vector<int>& nums) {
        int n=nums.size();
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
        sort(nums.begin(),nums.end());
        return nums[0];
    }
};