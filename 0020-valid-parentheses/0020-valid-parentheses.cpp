class Solution {
public:
    bool isValid(string s) {

        stack<char>st;

        for (int i=0;i<s.size();i++)
        {
            if (s[i]=='[' || s[i]=='(' || s[i]=='{')
            {
                st.push(s[i]);
            }
            else 
            {
                if (st.empty())
                {
                    return false ;
                }

                char el = st.top();

                if (s[i]==']' && el =='[' || s[i]==')'&& el =='(' || s[i]=='}' && el =='{')
                {
                    st.pop();
                }
                else 
                {
                    return false ;
                }
            }
        }

        return st.empty();
        
    }
};