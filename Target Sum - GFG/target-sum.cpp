// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//Back-end complete function Template for C++

class Solution {
    int countSubsets(vector < int > & A,int s1) {
       int n=A.size();
       int t[n + 1][s1 + 1];
       for (int i = 0; i <= n; i++) {
         for (int j = 0; j <= s1; j++) {
           if (i == 0)
             t[i][j] = 0;
           if (j == 0)
             t[i][j] = 1;
         }
       }
       for (int i = 1; i <= n; i++) {
         for (int j = 0; j <= s1; j++) {
           if (A[i - 1] <= j)
             t[i][j] = t[i - 1][j - A[i - 1]] + t[i - 1][j];
           else
             t[i][j] = t[i - 1][j];
         }
       }
    
       return t[n][s1];
 }
  public:
    int findTargetSumWays(vector<int>&A ,int target) {
    int n = A.size();
   int sum = 0;

   for (int i = 0; i < n; i++)
     sum += A[i];

   int s1 = (sum + target) / 2;  //according to derived formula  only s1 needs to be found
   if (sum < target || (sum + target) % 2 != 0)
     return 0;

   return countSubsets(A,s1);
    }
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        
        cin>>N;
        vector<int>arr(N);
        
        for(int i=0 ; i<N ; i++){
            cin>>arr[i];
        }
        int target;
        cin >> target;

        Solution ob;
        cout<<ob.findTargetSumWays(arr,target);
        cout<<"\n";
    }
    return 0;
}  // } Driver Code Ends