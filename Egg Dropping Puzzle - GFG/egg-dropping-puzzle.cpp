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

	int mn = INT_MAX;
	for (int k = 1; k <= floors; k++) {
		int temp_ans = 1 + max(Solve(eggs - 1, k - 1), Solve(eggs, floors - k)); // once egg break means decrement both floor and egg another agg did not break means check egg dropping from above 
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