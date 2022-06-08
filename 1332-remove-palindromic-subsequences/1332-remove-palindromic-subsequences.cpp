class Solution {
public:
    int removePalindromeSub(string S) {
        if (S == "") return 0;
        int i=0;
        int j=S.size()-1;
        while (i < j)
        {
            if (S[i] != S[j]) return 2;
            i++;
            j--;
        }
            
            
        return 1;
    }
};