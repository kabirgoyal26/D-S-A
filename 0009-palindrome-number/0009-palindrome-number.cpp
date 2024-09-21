class Solution {
public:
    bool isPalindrome(int x) {

        string k=to_string(x);

        int i=0;
        int j=k.length()-1;

        while (i<=j)
        {
            if (k[i]==k[j])
            {
                i++;
                j--;
            }
            else 
            {
                return false;
            }
        }
        return true;
        
    }
};