class Solution {
public:
    int lengthOfLongestSubstring(string s) {

        int l=0;
        int r=0;
        int ans=0;
        unordered_map<char,int>mpp;

        while (r<s.size())
        {
            if (mpp.find(s[r])!=mpp.end()&& mpp[s[r]] >= l)
            {
                l=mpp[s[r]]+1;

            }

            int temp = r-l+1;
            ans= max ( ans ,  temp );
            mpp[s[r]]=r;
            r++;
        }

        


       

        
        return ans ;
    }
};