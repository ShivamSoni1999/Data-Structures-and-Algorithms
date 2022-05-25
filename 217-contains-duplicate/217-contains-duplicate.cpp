class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
       int n=nums.size();
       unordered_set<int> uset; //bcz set property does't allow duplicate
        
       for(int i=0;i<n;i++)
       {
           uset.insert(nums[i]);
       }
        
       if(n!=uset.size()) return true;
        
    
       return false;
        
        
    }
};