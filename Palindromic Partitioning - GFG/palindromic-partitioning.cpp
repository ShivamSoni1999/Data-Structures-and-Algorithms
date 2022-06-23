// { Driver Code Starts
// Initial Template for c++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution {
bool isPallindrome(string X, int i, int j) {
	while (i <= j) {
		if (X[i] != X[j])
			return false;
		i++, j--;
	}

	return true;
}

int Solve(string X, int i, int j) {
	if (i >= j || isPallindrome(X, i, j)) {
		t[i][j] = 0;
		return 0;
	}

	if (t[i][j] != -1)
		return t[i][j];
	
    int left=0;
    int right=0;
	int ans = INT_MAX;
	for (int k = i; k < j; k++) {
	    if(t[i][k]!=-1)
	        left=t[i][k];
	    else
	        left=Solve(X, i, k);
	        
	    if(t[k+1][j]!=-1)
	        right=t[k+1][j];
	    else
	        left=Solve(X, k + 1, j);
		int temp_ans = left+right + 1;
		ans = min(ans, temp_ans);
	}

	return t[i][j] = ans;
}
  public:
    int t[501][501];
    int palindromicPartition(string X) {
      // code here
      int n = X.length();
      memset(t,-1,sizeof(t));
      return Solve(X, 0, n - 1);
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        string str;
        cin>>str;
        
        Solution ob;
        cout<<ob.palindromicPartition(str)<<"\n";
    }
    return 0;
}  // } Driver Code Ends