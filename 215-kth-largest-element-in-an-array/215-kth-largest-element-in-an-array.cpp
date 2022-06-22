//Amazon Microsoft Walmart Adobe Apple Bloomberg Facebook
class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
         sort(nums.begin(), nums.end(), greater<int>());
        return nums[k-1];
    }
};