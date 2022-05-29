class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int temp=0;
        
        //XOR each bcz the elements with frequency=2 will result in 0
        //And then the only element with frequency=1 will generate the answer.
        for(int i=0;i<nums.size();i++)
        {
            temp=temp^nums[ i ];  
        }
        
        return temp;
        
    }
};

//O(N), O(1) Solution