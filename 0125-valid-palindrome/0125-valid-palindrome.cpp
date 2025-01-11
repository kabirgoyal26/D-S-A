class Solution {
public:
    bool isPalindrome(string s) {

        int n=s.size();

        int r=0;
        int l=n-1;

       

        while (r<l)
        {
             while (r < l && !isalnum(s[r])) {
                r++;
            }
            while (r < l && !isalnum(s[l])) {
                l--;
            }
            
            
            if (tolower(s[r]) != tolower(s[l])) {
                return false;
            }
            r++;
            l--;

        }

    return true;
     }
};