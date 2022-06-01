class Solution {
public:
    bool isAnagram(string s, string t) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
        
        if (s==t) return true;
        int n1=s.length();
        int n2=t.length();
        if(n1!=n2)  return false;
        unordered_map <char,int> umap;
        
      for (int i=0; i<s.size(); i++) 
        {
            umap[s[i]]++;
            umap[t[i]]--;
        }
        
        for (auto it: umap) 
            if (it.second) 
                return false;
        
        return true;
       
    }
};