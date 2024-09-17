class Solution {
public:
    vector<string> uncommonFromSentences(string s1, string s2) {

        unordered_map<string,int>mpp;
        string k="";

        // Processing the first sentence s1
        for (int i = 0; i < s1.size(); i++) {
            if (s1[i] == ' ') {
                mpp[k]++;
                k = ""; // Reset k to start a new word
            } else {
                k = k + s1[i];
            }
        }
        // Add the last word in s1 to the map
        if (!k.empty()) {
            mpp[k]++;
        }

        k = ""; // Reset k for s2

        // Processing the second sentence s2
        for (int i = 0; i < s2.size(); i++) {
            if (s2[i] == ' ') {
                mpp[k]++;
                k = ""; // Reset k to start a new word
            } else {
                k = k + s2[i];
            }
        }
        // Add the last word in s2 to the map
        if (!k.empty()) {
            mpp[k]++;
        }

        vector<string> ans;

        // Find the uncommon words
        for (auto i : mpp) {
            if (i.second == 1) { // A word is uncommon if it appears only once
                ans.push_back(i.first);
            }
        }
        
        return ans;
    }
};
