class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int,int>m;
        for(int i = 0; i < nums.size(); i++) 
        {
            m[nums[i]]++;
        }
        for(auto i : m) if(i.second >= 2) return true;
        return false;
    }
};




// unordered_set<int> uset; //bcz set property does't allow duplicate  
//        for(int i=0;i<n;i++)
//        {
//            uset.insert(nums[i]);
//        }
//        if(n!=uset.size()) return true;
//        return false;