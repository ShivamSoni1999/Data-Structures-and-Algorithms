// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
int minDeletions(string str, int n);

int main(){
    int t;
    cin >> t;
    while(t--){
        
        int n;
        cin >> n;
        string s;
        cin >> s;
        cout << minDeletions(s, n) << endl;

    }
return 0;
}// } Driver Code Ends

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
int minDeletions(string str, int n) { 
      string rev_s = str;
      reverse(str.begin(), str.end());
      return str.length()-LCS_Helper(str, rev_s, n, n);
    //complete the function here 
} 