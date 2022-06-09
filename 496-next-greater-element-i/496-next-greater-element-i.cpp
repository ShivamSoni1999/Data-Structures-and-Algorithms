class Solution {
  public:
    vector < int > nextGreaterElement(vector < int > & nums1, vector < int > & nums2) 
    {
      unordered_map < int, int > mp;
      stack < int > st;
        //finding N.G.E for entire nums2 vector and atlast selecting only nums1 element
      for (int i = nums2.size() - 1; i >= 0; i--) 
      {
        if (st.size() == 0) 
            mp[nums2[i]] = -1;
        else if (st.top() > nums2[i]) 
            mp[nums2[i]] = st.top();
         
        else 
        {
          while (st.size() > 0 && st.top() <= nums2[i]) 
              st.pop();
          if (st.size() == 0) 
              mp[nums2[i]] = -1;  
          else 
              mp[nums2[i]] = st.top();
        }
          
        st.push(nums2[i]);
      }
        //pushing only nums1 entry into answer vector
      vector < int > ans;
      for (auto elem: nums1) 
      {
        ans.push_back(mp[elem]);
      }
      return ans;
    }
};