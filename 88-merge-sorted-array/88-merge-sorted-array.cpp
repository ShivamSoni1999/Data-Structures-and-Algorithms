class Solution {
public:
 void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
     int i = m - 1; //setting i to last position i.e: m of nums1
     int j = n - 1;
     int k = m + n - 1; //setting k to last position
     
     while(i >= 0 and j >= 0)
     {
         if(nums1[i] < nums2[j]) 
         {
             nums1[k] = nums2[j];       //inserting bigest element at last in nums1
             j--;
             k--;
         } 
         else 
         {
             nums1[k] = nums1[i];
             i--;
             k--;
         }
     }
          //copying remaining element
        while(i>=0)
            nums1[k--]=nums1[i--];
        while(j>=0)
            nums1[k--]=nums2[j--];
 }
};