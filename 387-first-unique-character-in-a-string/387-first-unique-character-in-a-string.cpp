class Solution {
public:
    int firstUniqChar(string s) 
    {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
        unordered_map<char,int> map;
        
        for(int i=0; i<s.length(); i++) //counting frequency of every char in map
        {
                map[s[i]]++;   
        }
        
        for(int i=0; i<s.length(); i++)
        {  
            if(map[s[i]] == 1)
                return i;
        }
        
        return -1;
    
    }
};