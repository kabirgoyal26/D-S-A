class Solution {
public:
    int characterReplacement(string s, int k) {
        // onlu one formula is no. of changes is length - maxfrequency
        int l=0;
        int r=0;
        int maxlength=0;
        int maxfreq=0;
        // hash ko as vector he karna pdega 
        vector<int>hash(26,0);
        
        while(r<s.size())
        {
            hash[s[r]-'A']++;
            maxfreq=max(maxfreq,hash[s[r]-'A']);// ham length same rakh rahe ah just ek eke kar ke bada rag=he ha 
            if((r-l+1)- maxfreq >k)
            {
                hash[s[l]-'A']--;
                l++;
            }

            if((r-l+1)- maxfreq <=k)
            {
                maxlength=max(maxlength,r-l+1);
            }
            r++;
        }
        return maxlength;
        
        
    }
};