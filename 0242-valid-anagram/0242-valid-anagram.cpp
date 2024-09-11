class Solution {
public:
    bool isAnagram(string s, string t) {

        int n=s.length();
        int m=t.length();


        if (m!=n)
        {
            return false ;
        }
        unordered_map<char,int>mpp;


        for (int i=0;i<n;i++)
        {
            mpp[s[i]]++;
        }

        for (int j=0;j<m;j++)
        {
            mpp[t[j]]--;
        }

        for (auto k : mpp)
        {
            if(k.second!=0)
            {
                return false;
            }
            
        }

        return true;
        
    }
};