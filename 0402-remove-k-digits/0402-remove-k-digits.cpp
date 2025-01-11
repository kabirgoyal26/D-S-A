class Solution {
public:
    string removeKdigits(string nums, int k) {

        stack<char>st;
        int n=nums.size();
        string res="";

        for (int i=0;i<n;i++)
        {
            while (!st.empty() && k>0 && st.top()-'0' > nums[i]-'0')
            {
                st.pop();
                k=k-1;
            }
            st.push(nums[i]);

        }

        while (k>0 )
        {
            st.pop();
            k--;
        }

        if (st.empty())
        {
            
             res="0";
            return res;
        }

        while (!st.empty())
        {
            res+=st.top();
            st.pop();
        }

        while (res.size()!=0 && res.back()=='0')
        {
            res.pop_back();
        }
        
         reverse(res.begin(), res.end());

        if (res.empty())
        {
            res="0";
            return res;
        }
        return res;
    }
};