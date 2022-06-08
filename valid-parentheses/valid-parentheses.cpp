class Solution {
public:
    bool isValid(string s) 
    {
        stack<char> st; //creating the stack of char
        
        for(auto i:s)   //iterating over each char in string
        {
            if( i=='(' or i=='[' or i=='{' )   //if current char is opening bracket of any kind the just push it on to the stack
                st.push(i);
            else
            {
                if(st.empty() or (st.top()=='(' and i!=')') or (st.top()=='[' and i!=']') or (st.top()=='{' and i!='}'))
                    return false;
                st.pop();

            }
                
        }
        return st.empty();
        
    }
};