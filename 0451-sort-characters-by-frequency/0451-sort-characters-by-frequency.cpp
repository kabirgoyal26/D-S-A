class Solution {
public:
    string frequencySort(string s) {

        vector<pair<char,int>>k(256);

        for (char & ch : s)
        {
            int fq = k[ch].second;
            k[ch]={ch,fq+1};
        }

        auto comp=[&](pair<char,int>&p1,pair<char,int>&p2)
        {
            return p1.second > p2.second;
        };

        sort(k.begin(),k.end(),comp);

        string ans="";

        for (int i=0;i<256;i++)
        {
            if (k[i].second > 0)
            {
                string temp = string(k[i].second,k[i].first);
                ans = ans + temp;
            }
        }
        return ans ;
    }
};