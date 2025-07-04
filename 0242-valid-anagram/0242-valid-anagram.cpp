class Solution {
public:
    bool isAnagram(string s, string t) {
        

        if (s.size()!=t.size())
        {
            return false ;
        }
        // sort(s.begin(),s.end());
        // sort(t.begin(),t.end());

        // for (int i=0;i<s.size();i++)
        // {
        //     if (s[i]!=t[i])
        //     {
        //         return false ;
        //     }
        // }

        // return true;


        unordered_map<char,int>mpp;

        for (int i=0;i<s.size();i++)
        {
            mpp[s[i]]++;
        }

        for (int j=0;j<t.size();j++)
        {
            if (mpp.find(t[j])!=mpp.end())
            {
                mpp[t[j]]--;
                if (mpp[t[j]]==0)
                {
                    mpp.erase(t[j]);
                }
            }
            else
            {
                return false ;
            }
        }
        return true ;

    }
};