// { Driver Code Starts
#include <bits/stdc++.h>
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
          t[i][j] = max(t[i][j - 1], t[i - 1][j]);
        }
      }
    }
    return t[n][m];
  }
	public:
	int minOperations(string str1, string str2) 
	{ 
	    int n = str1.size();
		int m = str2.size();
        int ans=helper(str1,str2,n,m);
        //Min no of deletions-> n-|lcs|  
        //Min no of insertion-> m-|lcs|
        int l1=n-ans;
        int l2=m-ans;
        return l1+l2;
	    
	} 
};

// { Driver Code Starts.
int main() 
{
   	
   
   	int t;
    cin >> t;
    while (t--)
    {
        string s1, s2;
        cin >> s1 >> s2;

	    Solution ob;
	    cout << ob.minOperations(s1, s2) << "\n";
	     
    }
    return 0;
}

  // } Driver Code Ends