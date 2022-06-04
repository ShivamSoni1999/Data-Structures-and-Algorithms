class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        int start=0;
        int end=letters.size()-1;
        
        int ans=letters[0];
        
        while(start<=end)
        {
            int mid=start+(end-start)/2;
            if(target==letters[mid])    //continuing search even after element found
                start=mid+1;
            
            else if(target<letters[mid])     //if key is less then arr[mid] then continue search on left part and 
                                            //store current element in ans as it is potential answer.
            {
                ans=letters[mid];
                end=mid-1;
            }
            else
                start=mid+1;
                
        }
        return ans;
        
    }
};