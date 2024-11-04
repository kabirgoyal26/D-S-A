class Solution {
public:
    string compressedString(string word) {
       

      
       string ans ="";
       int n=word.length();
       int i=0;


       while (i<n)
       {
        char ch = word[i];
        int count =0;
        while(i<n && count < 9  && word[i]==ch )
        {
            count++;
            i++;
        }

        ans += to_string(count) + ch;
       }



        return ans ;
    }
};