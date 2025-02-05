class Solution {
public:
    int characterReplacement(string s, int k) {
        int l=0;
        int r=0;
        int maxlength=0;

        vector<int>vec(26,0);

        while (r<s.size())
        {
            vec[s[r]-'A']++;

            int maxf=max(maxf,vec[s[r]-'A']);

            if (r-l+1-maxf > k)
            {
                vec[s[l]-'A']--;
                l++;
            }

            if (r-l+1-maxf <= k)
            {
                maxlength=max(maxlength,r-l+1);
            }
            r++;
        }
        return maxlength;
    }
};