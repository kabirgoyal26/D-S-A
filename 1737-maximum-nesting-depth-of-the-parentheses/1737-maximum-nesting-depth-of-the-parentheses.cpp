class Solution {
public:
    int maxDepth(string s) {

        int maxans=0;
        int temp =0;

       for (int i=0;i<s.size();i++)
       {
       
        if (s[i]=='(')
        {
            
            temp++;
        }

        else if (s[i]==')')
        {
            temp--;
        }

        maxans=max(maxans,temp);
       }
       return maxans ;
    }
};