class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int n=nums.size();
        if(n==1) return 0;
        int start=0;
        int end=n-1;
        while(start<=end)
        {
            int mid=start+(end-start)/2;
            
            
            if(mid>0 && mid<n-1)
            {
               
                if(nums[mid]>nums[mid+1] && nums[mid]>nums[mid-1])      //
                    return mid; 
                else if(nums[mid]<nums[mid-1]) 
                    end=mid-1; 
                else
                    start=mid+1;        
            }
            else if(mid==0) //edge case where mid is pointing to first index
            {
                
                if(nums[mid]<nums[mid+1])
                    return 1;
                else
                    return 0;
            }
            
           else if(mid==n-1) //edge case where mid pointing to last index
            {
               
                if(nums[mid-1]<nums[mid-2])
                    return n-2;
                else
                    return n-1;
            }
               
        }
        return -1;
    }
};