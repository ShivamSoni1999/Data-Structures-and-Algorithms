class Solution 
{
public:
    vector<int> sortArrayByParity(vector<int>& nums) 
    {
        int n=nums.size();
        if(n==0)
            return nums;
        int i=0;
        int left=0;
        int right=n-1;
        while(left<=right)
        {
            if(nums[left]%2==1 && nums[right]%2==0)
            {
                swap(nums[left],nums[right]);
                left++;
                right--;
                
            }
            else if(nums[left]%2==1 && nums[right]%2==1)
            {
                right--;
            }
            else if(nums[left]&0 && nums[right]%2==0)
            {
                left++;
            }
            else 
            {
                left++;
            }
        }
        return nums;
        
    }
};