class Solution {
public:
    void moveZeroes(vector<int>& nums) 
    {
        int left=0,right=0;
        int n = nums.size();
        while(left<n)
        {
            if(nums[left]!=0)   //looking for non zero element
            {
                swap(nums[left],nums[right]);
                left++;
                right++;
            }
            else
                left++;
        }
    }
};