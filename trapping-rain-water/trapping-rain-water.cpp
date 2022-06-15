class Solution {
public:
    int trap(vector<int>& height) {
        
        int n=height.size();
        vector<int> mxl(n);             //creating a vector to store maximum from left.
        vector<int> mxr(n);             //creating a vector to store maximum from right.
        
        mxl[0]=height[0];               //copy first element to mxl vector
        for(int i=1;i<n;i++)
            mxl[i]=max(mxl[i-1],height[i]);
        
        
        mxr[n-1]=height[n-1];           //copy last element to mxr vector
        for(int i=n-2;i>=0;i--)
            mxr[i]=max(mxr[i+1],height[i]);
        
        int water[n],sum=0;
        
        for(int i=0;i<n;i++)    
        {
            water[i]=min(mxr[i],mxl[i])-height[i]; //calculating water[i]
            sum+=water[i];                         //calcultaing sum as well
        }
        
      return sum; 
    }
};