//amazon | bloomberg | facebook | microsoft | uber
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        int least=INT_MAX;
        int max_pro=0;
        int prof=0;
        
        for(int i=0;i<n;i++)
        {
            if(prices[i]<least)
                least=prices[i];
            
            prof=prices[i]-least;
            max_pro=max(max_pro,prof);
        }
        return max_pro;
    }
};