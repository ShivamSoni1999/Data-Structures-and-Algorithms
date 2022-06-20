// { Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function template for C++

class Solution{
  int LCS_Helper(string x, string y, int n, int m) {
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
    int countMin(string s){
    //complete the function here
        int n=s.length();
        string rev=s;
        reverse(rev.begin(),rev.end());
        return s.length()-LCS_Helper(s, rev, n, n);
    }
};

// { Driver Code Starts.
int main(){
    int t;
    cin >> t;
    while(t--){
        string str;
        cin >> str;
        Solution ob;
        cout << ob.countMin(str) << endl;
    }
return 0;
}

  // } Driver Code Ends