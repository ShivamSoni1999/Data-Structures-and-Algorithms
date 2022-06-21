// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++
class Solution{
public:
int t[1001][1001];
int Solve(int arr[], int i, int j) {
	if (i >= j) {
		t[i][j] = 0;
		return 0;
	}

	if (t[i][j] != -1)// when it is not zero means return the value from the table other than -1
		return t[i][j]; 
		
	int ans = INT_MAX;
	for (int k = i; k <= j - 1; k++) {
		int temp_ans = Solve(arr, i, k) + Solve(arr, k + 1, j) + arr[i - 1] * arr[k] * arr[j];
		ans = min(ans, temp_ans);
	}
    t[i][j] = ans;      // store it in table 
	return ans; 
}


    int matrixMultiplication(int N, int arr[])
    {
        // code here
        for(int i =0;i<1001;i++){
           for(int j =0;j<1001;j++){
               t[i][j] = -1;
           }
       }
        return Solve(arr,1,N-1);
    }
};


// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        int arr[N];
        for(int i = 0;i < N;i++)
            cin>>arr[i];
        
        Solution ob;
        cout<<ob.matrixMultiplication(N, arr)<<endl;
    }
    return 0;
}  // } Driver Code Ends