class Solution {
public:
    void reverseString(vector<char>& s) {
        
        ios_base::sync_with_stdio(0);
        cin.tie(0); cout.tie(0);
        int left=0;
        int right=s.size()-1;
        while(left<right)
        {
            swap(s[left],s[right]);
            left++;
            right--;
        }
        
        
        
    }
};