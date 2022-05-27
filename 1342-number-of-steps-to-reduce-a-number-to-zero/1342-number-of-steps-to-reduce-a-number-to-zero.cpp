class Solution {
public:
    int numberOfSteps(int num) {
        int count=0;
        while(num)
        {
            if(num%2==0)
            {
                num=num/2;
                count++;
            }
            else
            {
                num--;
                count++;  
            }
            
        }
        return count;
    }
};
// Time Complexity : O(logN)
// Space Complexity : O(1)