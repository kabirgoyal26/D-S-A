class Solution {
public:
    bool canBeValid(string s, string locked) {

        int open =0;
        int closed =0;

        int n= s.size();

        if (n%2!=0)
        {
            return false;
        }

        for (int i=0;i<n;i++)
        {
            if (s[i]=='(' || locked[i]=='0')
            {
                open++;
            }
            else 
            {
                open--;
            }
            if (open<0)
            {
                return false;
                
            }
        }
        for (int i=n-1;i>=0;i--)
        {
            if (s[i]==')' || locked[i]=='0')
            {
                closed++;
            }
            else 
            {
                closed--;
            }
            if (closed<0)
            {
                return false;
                
            }
        }


        return true ;
    }
};