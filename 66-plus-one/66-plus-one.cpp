class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        
        int n=digits.size()-1;
        
        
        for(int i=n;i>=0;i--)
        {
            if(digits[i]==9) //cheking for last digit if it's 9 so can be overflow
            {
                digits[i]=0;
            }
            else        //else we can directly increment 1
            {
                digits[i]++;
                return digits;
            }
        }
        // if the program runs to this point, each 9 is now a 0.
       // to get a correct solution, we need to add one more element with 
      // a value of zero AND set digits[0] to 1 (in the most significant position)
     // to account for the carry digit.
        
         digits.insert(digits.begin(),1);
         return digits;
        
        
    }
};