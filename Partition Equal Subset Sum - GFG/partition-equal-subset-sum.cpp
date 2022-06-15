// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution{
public:
  bool subset_sum(int nums[], int n, int sum) {
    bool t[n + 1][sum + 1];
    // i denotes the size of the array 
    // j denotes the target sum (subset sum)
    for (int i = 0; i < n + 1; i++) {
      for (int j = 0; j < sum + 1; j++) {
        if (i == 0) // when array(i) is empty than there is no meaning of sum of elements so return false
          t[i][j] = false;
        if (j == 0) // when sum(j) is zero and there is always a chance of empty subset so return it as true;
          t[i][j] = true;
      }
    }
      
    // start from 1 since 1st row and column is already considerd 
    for (int i = 1; i < n + 1; i++) {
      for (int j = 1; j < sum + 1; j++) {
        if (nums[i - 1] <= j) {
          t[i][j] = t[i - 1][j - nums[i - 1]] or t[i - 1][j];
        } else {
          t[i][j] = t[i - 1][j];
        }
      }
    }
    return t[n][sum];
  }
    int equalPartition(int n, int nums[])
    {
      int sum = 0;
      for (int i = 0; i < n; i++) {
        sum = sum + nums[i];
      }
      if (sum % 2 != 0)
        return false;
      else {
        sum = sum / 2;
        return subset_sum(nums, n, sum);
      }
    
       
       
       
       
       
       
       
       
       
       
       
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        int arr[N];
        for(int i = 0;i < N;i++)
            cin>>arr[i];
        
        Solution ob;
        if(ob.equalPartition(N, arr))
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
    return 0;
}  // } Driver Code Ends