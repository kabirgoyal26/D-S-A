class Solution {
public:
    bool areAlmostEqual(string s1, string s2) {
        if (s1 == s2) return true;  
        
        vector<int> ans;
        
        
        for (int i = 0; i < s1.size(); i++) {
            if (s1[i] != s2[i]) {
                ans.push_back(i);
            }
        }
        
       
        if (ans.size() == 2) {
            int a = ans[0];
            int b = ans[1];
            return (s1[a] == s2[b] && s1[b] == s2[a]);
        }
        
        
        return false;
    }
};
