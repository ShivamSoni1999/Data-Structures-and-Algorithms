class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        vector<vector<int>> v;
        sort(arr.begin(), arr.end());
        
        int res = INT_MAX;
        for(int i=1; i<arr.size(); i++) //finding the minimum absolute differnce
        {
            res = min(res, abs(arr[i] - arr[i-1]));
        }
        
        for(int i=1; i<arr.size(); i++) //taking i,i-1 whose differce is ==min  abs diff. and pushing them back
        {
            if(arr[i] - arr[i-1] == res)
            {
                vector<int> temp;
                temp.push_back(arr[i-1]);
                temp.push_back(arr[i]);
                v.push_back(temp);
            }
        }
        
        return v;
    }
};