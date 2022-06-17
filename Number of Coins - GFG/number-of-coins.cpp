// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{

	public:
	#define INF INT_MAX-1;
	int minCoins(int coins[], int n, int sum) 
	{ 
	   
      if (sum == 0)
        return 0;
      if (sum < 0)
        return -1;
      int t[n + 1][sum + 1];
      for (int i = 0; i <= n; i++) 
      {
        t[i][0] = 0;
      }
      for (int j = 1; j <= sum; j++)
      {
        t[0][j] = INF;
      }

      t[0][0] = 0;
      for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= sum; j++) {
          if (coins[i - 1] <= j)
            t[i][j] = min(t[i - 1][j], 1 + t[i][j - coins[i - 1]]);
          else
            t[i][j] = t[i - 1][j];
        }
      }

      if (t[n][sum] != INT_MAX - 1)
        return t[n][sum];
      else return -1;
	     
	} 
	  
};

// { Driver Code Starts.
int main() 
{
   
   
   	int t;
    cin >> t;
    while (t--)
    {
        int v, m;
        cin >> v >> m;

        int coins[m];
        for(int i = 0; i < m; i++)
        	cin >> coins[i];

      
	    Solution ob;
	    cout << ob.minCoins(coins, m, v) << "\n";
	     
    }
    return 0;
}
  // } Driver Code Ends