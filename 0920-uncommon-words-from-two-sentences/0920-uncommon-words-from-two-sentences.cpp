class Solution {
public:
    vector<string> uncommonFromSentences(string s1, string s2) {

        unordered_map<string,int>mpp;
        string k="";

        
        for (int i = 0; i < s1.size(); i++) {
            if (s1[i] == ' ') {
                mpp[k]++;
                k = ""; 
            } else {
                k = k + s1[i];
            }
        }
       
        if (!k.empty()) {
            mpp[k]++;
        }

        k = ""; 

        
        for (int i = 0; i < s2.size(); i++) {
            if (s2[i] == ' ') {
                mpp[k]++;
                k = ""; 
            } else {
                k = k + s2[i];
            }
        }
        
        if (!k.empty()) {
            mpp[k]++;
        }

        vector<string> ans;

        
        for (auto i : mpp) {
            if (i.second == 1) { 
                ans.push_back(i.first);
            }
        }
        
        return ans;
    }
};
