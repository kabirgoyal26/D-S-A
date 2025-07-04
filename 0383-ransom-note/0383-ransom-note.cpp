class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {

        unordered_map<char,int>mpp;

        for (int i=0;i<magazine.size();i++)
        {
            mpp[magazine[i]]++;
        }

        for (int j=0;j<ransomNote.size();j++)
        {
            if (mpp.find(ransomNote[j])!=mpp.end())
            {
                mpp[ransomNote[j]]--;
                if (mpp[ransomNote[j]]==0)
                {
                    mpp.erase(ransomNote[j]);
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