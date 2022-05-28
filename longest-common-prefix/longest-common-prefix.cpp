class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        
        int n=strs.size();
        if(n==0) return "";
        string ans="";
        sort(strs.begin(),strs.end());
        string a = strs[0];    //storing 1st string in a
        string b = strs[n-1]; //storing last string in b
        
        for(int i=0;i<a.size();i++)
        {
            if(a[i]==b[i])
            {
                ans=ans+a[i];
            }
            else
                break;
        }
        return ans;
        
        
    }
};