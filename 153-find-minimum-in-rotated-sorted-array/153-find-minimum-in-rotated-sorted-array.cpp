class Solution {
public:
    int findMin(vector<int>& nums) {
        int n= nums.size();
        int start=0;
        int end = nums.size()-1;
        if (n==1)
            return nums[0];
        while (start<=end)
        {
            int mid= start + (end-start)/2;
            int prev=(mid+n-1)%n;   //to prevent overflow
            int next= (mid+1)%n;
            
            if (nums[mid]<nums[prev] && nums[mid]<nums[next])
                return nums[mid];
            
            else if(nums[end]<nums[mid]) //if true means right half is unsorted so search for min begins there 
                start = mid+1;
            
            else  //means left half is unsorted 
                end= mid-1;
        }
        return -1;
    }
};