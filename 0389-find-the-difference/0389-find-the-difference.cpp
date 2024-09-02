class Solution {
public:
    char findTheDifference(string s, string t) {

       int XOR=0;

       for(char &i : s)
       {
        XOR=XOR^i;
       }

       for(char &j : t)
       {
        XOR=XOR^j;
       }

       return char (XOR);
    }
};