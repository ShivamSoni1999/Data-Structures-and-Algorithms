// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution
{
    public:
    int t[201][201];
    int Solve(int eggs, int floors) {
	if (eggs == 1)
		return floors;
	if (floors == 0 || floors == 1)
		return floors;
	
	if(t[eggs][floors]!=-1)
	    return t[eggs][floors];
    int low = 0;
    int high = 0;
	int mn = INT_MAX;
	for (int k = 1; k <= floors; k++) {
	    //1. Egg will break
        //2. Egg will not break
	  if (t[eggs - 1][k - 1] != -1) // break the temp in sub problemes 
        high = t[eggs - 1][k - 1];
      else {
        high = Solve(eggs - 1, k - 1);
        t[eggs - 1][k - 1] = high;
      }

      if (t[eggs][floors - k] != -1)
        low = t[eggs][floors - k];
      else {
        low = Solve(eggs, floors - k);
        t[eggs][floors - k] = low;
      }

      int temp_ans = 1 + max(low, high);
		mn = min(mn, temp_ans);
	}

	return t[eggs][floors]=mn;
}
    //Function to find minimum number of attempts needed in 
    //order to find the critical floor.
    int eggDrop(int n, int k) 
    {
        memset(t, -1, sizeof(t));
        // your code here
        return Solve(n,k);
    }
};

// { Driver Code Starts.
int main()
{
    //taking total testcases
    int t;
    cin>>t;
    while(t--)
    {
        //taking eggs and floors count
        int n, k;
        cin>>n>>k;
        Solution ob;
        //calling function eggDrop()
        cout<<ob.eggDrop(n, k)<<endl;
    }
    return 0;
}
  // } Driver Code Ends