class Solution {
public:
    int romanToInt(string s) {

        int n=s.length();
        unordered_map<char,int>mpp;
        mpp['I']=1;
        mpp['V']=5;
        mpp['X']=10;
        mpp['L']=50;
        mpp['C']=100;
        mpp['D']=500;
        mpp['M']=1000;


        int ans =0;

        for (int i=0;i+1<n;i++)
        {
            if (mpp[s[i]]>=mpp[s[i+1]])
            {
                ans = ans + mpp[s[i]];
            }
            else 
            {
                ans = ans - mpp[s[i]];
            }


        }
        // last element bach raha ha 
        return ans + mpp[s.back()];
    }
};