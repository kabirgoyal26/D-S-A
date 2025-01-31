class Solution {
public:
    int beautySum(string s) {
        int ans = 0;
        
       
        for (int i = 0; i+2< s.size(); i++) {
            vector<int> store(26, 0);  
            
           
            for (int j = i; j < s.size(); j++) {
                
                store[s[j] - 'a']++;
                
                
                int maxFreq = *max_element(store.begin(), store.end());
                int minFreq = INT_MAX;
                
                
                for (int k = 0; k < 26; k++) {
                    if (store[k] > 0) {
                        minFreq = min(minFreq, store[k]);
                    }
                }
                
               
                ans += (maxFreq - minFreq);
            }
        }
        
        return ans;
    }
};
