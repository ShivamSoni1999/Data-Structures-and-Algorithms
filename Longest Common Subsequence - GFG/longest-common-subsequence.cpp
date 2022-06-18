// { Driver Code Starts
#include<bits/stdc++.h>
const int mod=1e9+7;
using namespace std;

 // } Driver Code Ends
// function to find longest common subsequence

class Solution
{
    int helper(string text1, string text2, int n, int m) {
        if(n==0 or m==0)
            return 0;
        if(t[n][m]!=-1)
            return t[n][m];
        if(text1[n-1]==text2[m-1])
            t[n][m] = 1 + helper(text1,text2,n-1,m-1);
        else
            t[n][m] = max(helper(text1,text2,n,m-1),helper(text1,text2,n-1,m));
        return t[n][m];
    }
    
    public:
    int t[1001][1001];
    //Function to find the length of longest common subsequence in two strings.
    int lcs(int x, int y, string s1, string s2)
    {
        memset(t,-1,sizeof(t));
        return helper(s1,s2,x,y);
    }
};


// { Driver Code Starts.
int main()
{
    int t,n,k,x,y;
    cin>>t;
    while(t--)
    {
        cin>>x>>y;          // Take size of both the strings as input
        string s1,s2;
        cin>>s1>>s2;        // Take both the string as input
        Solution ob;
        cout << ob.lcs(x, y, s1, s2) << endl;
    }
    return 0;
}
  // } Driver Code Ends