// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

unordered_map<string,int> mp;
int mod = 1003;
class Solution{
public:
   
   int solve(string S, int i, int j, bool isTrue){
       //BASE CONDITION
       if(i>j)
           return 0;
       if(i==j){
           if(isTrue==true){
               return S[i]=='T';
           }
           else
               return S[i]=='F';
       }
       
       //CONDTION OF MAPPING
       string temp = to_string(i);
       temp.push_back(' ');
       temp.append(to_string(j));
       temp.push_back(' ');
       temp.append(to_string(isTrue));
       
       if(mp.find(temp)!=mp.end()){
           return mp[temp];
       }
       
       int ans=0;
       //LOOPING
       for(int k=i+1; k<=j-1; k=k+2){
           //FINDING COUNT OF POSSIBILITIES
           int lT = solve(S,i,k-1,true);
           int lF = solve(S,i,k-1,false);
           int rT = solve(S,k+1,j,true);
           int rF = solve(S,k+1,j,false);
           
           if(S[k]=='&'){
               if(isTrue==true)
               {
                   ans = ans + lT*rT;
               }
               else  ans = ans + lT*rF + lF*rT + lF*rF;
           }
           
           else if(S[k]=='|'){
               if(isTrue==true)
               {
                   ans = ans + lT*rF + lF*rT + lT*rT;
               }
               else  ans = ans + lF*rF;
           }
           
           else if(S[k]=='^'){
               if(isTrue==true)
               {
                   ans = ans + lT*rF + lF*rT;
               }
               else  ans = ans + lF*rF  + lT*rT;
           }
           
       }
       
       return mp[temp]=ans%mod;
   }
   
   int countWays(int N, string S){
       int i = 0;
       int j = N-1;
       bool isTrue = true;
       mp.clear();
       return solve(S,i,j,isTrue);
   }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        string S;
        cin>>S;
        
        Solution ob;
        cout<<ob.countWays(N, S)<<"\n";
    }
    return 0;
}  // } Driver Code Ends