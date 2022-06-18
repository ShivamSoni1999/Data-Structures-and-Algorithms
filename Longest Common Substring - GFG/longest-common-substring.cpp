// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{
  int helper(string x, string y, int n, int m) {
    int t[n + 1][m + 1];
    if (n == 0 or m == 0)
      return 0;
    for (int i = 0; i <= n; i++) {
      for (int j = 0; j <= m; j++) {
        if (i == 0 or j == 0)
          t[i][j] = 0;
      }
    }
    for (int i = 1; i <= n; i++) {
      for (int j = 1; j <= m; j++) {
        if (x[i - 1] == y[j - 1]) {
          t[i][j] = 1 + t[i - 1][j - 1];
        } else {
          t[i][j] = 0;
        }
      }
    }
     //matrix t[n][m] will contain all possible substring we need to find the max
       int mx = INT_MIN;
    	for (int i = 0; i <= n; i++)
    		for (int j = 0; j <= m; j++)
    			mx = max(mx, t[i][j]);
	return mx;
  }
    public:
   
    int longestCommonSubstr (string x, string y, int n, int m)
    {
        return helper(x,y,n,m);
    }
    
};

// { Driver Code Starts.

int main()
{
    int t; cin >> t;
    while (t--)
    {
        int n, m; cin >> n >> m;
        string s1, s2;
        cin >> s1 >> s2;
        Solution ob;

        cout << ob.longestCommonSubstr (s1, s2, n, m) << endl;
    }
}
// Contributed By: Pranay Bansal
  // } Driver Code Ends