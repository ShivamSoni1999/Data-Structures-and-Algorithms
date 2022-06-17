
class Solution {
#define INF INT_MAX-1;
public:
    int coinChange(vector<int>& coins, int sum) {
        int n=coins.size();
         if(sum == 0)
            return 0;
        if(sum<0)
            return -1;
        
        int t[n+1][sum+1];
        for(int i=0;i<=n;i++){
			t[i][0] = 0;
		}
		for(int j=1;j<=sum;j++){
			t[0][j] =INF;
		}

        t[0][0] = 0;
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= sum; j++)
            {
                if (coins[i - 1] <= j)
				    t[i][j] = min(t[i - 1][j], 1 + t[i][j - coins[i - 1]]);
                else
                    t[i][j] = t[i - 1][j];
            }
			
        }
		

	if(t[n][sum]!=INT_MAX-1)
        return t[n][sum];
    else return -1;
    }
};