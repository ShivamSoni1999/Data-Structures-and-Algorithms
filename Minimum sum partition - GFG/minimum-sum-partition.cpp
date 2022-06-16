// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{

  public:
    vector<int> subsetsum(int arr[],int n,int sum){
        bool t[n + 1][sum + 1];
        for (int i = 0; i <= n; i++) {
            for (int j = 0; j <= sum; j++) {
                if (i == 0)
                  t[i][j] = false;
                if (j == 0)
                  t[i][j] = true;
            }
        }
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= sum; j++) {
                if (arr[i - 1] <= j)
                  t[i][j] = t[i - 1][j - arr[i - 1]] || t[i - 1][j]; // include or exclude
                else
                  t[i][j] = t[i - 1][j]; // exclude
            }
        }
        vector<int> v;
        for (int j = 0; j <= sum; j++)
        {
            if(t[n][j]==true)
                v.push_back(j);
        }
        return v;
    }
	int minDifference(int arr[], int n)  { 
	    int mn=INT_MAX;
	    int sum=0; //range
	    for(int i=0;i<n;i++)
	        sum=sum+arr[i];
	        
	    vector<int> v = subsetsum(arr,n,sum);
	    for (int i = 0; i < v.size(); i++)
	    {
	        mn = min(mn, abs(sum - 2 * v[i]));
	    }
	    return mn;
	    
	} 
};


// { Driver Code Starts.
int main() 
{
   
   
   	int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        int a[n];
        for(int i = 0; i < n; i++)
        	cin >> a[i];

       

	    Solution ob;
	    cout << ob.minDifference(a, n) << "\n";
	     
    }
    return 0;
}  // } Driver Code Ends