class Solution {
  string lcs_helper(string str1, string str2, int n, int m) {
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
        if (str1[i - 1] == str2[j - 1]) {
          t[i][j] = 1 + t[i - 1][j - 1];
        } else {
          t[i][j] = max(t[i][j - 1], t[i - 1][j]);
        }
      }
    }
    int i = n;
    int j = m;
    string s = "";
    while (i > 0 && j > 0) {
      if (str1[i - 1] == str2[j - 1]) {
        s.push_back(str1[i - 1]);
        i--;
        j--;
      } else {
        if (t[i][j - 1] > t[i - 1][j]) {
          s.push_back(str2[j - 1]);
          j--;
        } else {
          s.push_back(str1[i - 1]);
          i--;
        }
      }
    }
    while (i > 0) {
      s.push_back(str1[i - 1]);
      i--;
    }
    while (j > 0) {
      s.push_back(str2[j - 1]);
      j--;
    }
    reverse(s.begin(), s.end());
    return s;
  }
  public:
    string shortestCommonSupersequence(string str1, string str2) {
      int n = str1.length();
      int m = str2.length();
      return lcs_helper(str1, str2, n, m);

    }
};