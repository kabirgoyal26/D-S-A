class Solution {
public:
    int countPrefixSuffixPairs(vector<string>& words) {

        int ans =0;

        for (int i=0;i<words.size();i++)
        {
            for (int j=i+1;j<words.size();j++)
            {
                string s1=words[i];
                string s2=words[j];

                

               if (s2.size() >= s1.size() && s2.find(s1) == 0 && s2.rfind(s1) == s2.size() - s1.size())
                {
                    ans=ans+1;
                }
            }
        }
        return ans ;
    }
};