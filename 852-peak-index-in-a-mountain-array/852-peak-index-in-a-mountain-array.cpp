class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int n=arr.size();
        int start=0;
        int end=n-1;
        if(n==1) return 0; 
        
        while(start<=end)
        {
            int mid=start+(end-start)/2;
            
            if(arr[mid]>arr[mid+1] and arr[mid]>arr[mid-1])
                return mid;
            else if(arr[mid]<arr[mid+1])
                start=mid+1;
            else
                end=mid-1;
        }
        return -1;
    }
};