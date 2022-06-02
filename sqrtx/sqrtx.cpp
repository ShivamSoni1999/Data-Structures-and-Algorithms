class Solution {
public:
    int mySqrt(int x) {
        int start=0;
        int end=x;
        long int ans;
        
        while(start<=end)
        {
            long mid = start + (end-start)/2;
            
            if(mid*mid==x) return mid;
            else if(mid*mid<x)
            {
                start=mid+1;
                ans=mid;
                
            }
            else
                end=mid-1;
                
        }
        return ans;
    }
};