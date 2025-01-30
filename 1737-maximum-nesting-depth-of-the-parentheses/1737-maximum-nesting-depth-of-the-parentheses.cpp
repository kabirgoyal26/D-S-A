class Solution {
public:
    int maxDepth(string s) {

        int maxans=0;

        stack<char>st;

        for (int i=0;i<s.size();i++)
        {
            if (s[i]=='(')
            {
                st.push('(');
            }
            else if (s[i]==')')
            {
                st.pop();
            }
            
            int k= st.size();

            maxans=max(maxans,k);
        }
        return maxans ;
    }
};