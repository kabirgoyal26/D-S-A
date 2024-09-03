class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {

        vector<int>charcount(26,0);

        for(char & i : chars)
        {
            charcount[i-'a']++;
        }


        int length=0;

        for (string & word : words )
        {
            vector<int>wordcount(26,0);

            for(char & j : word)
            {
                wordcount[j-'a']++;
            }

            bool ok = true;

            for(int k=0;k<26;k++)
            {
                if(wordcount[k]>charcount[k])
                {
                    ok=false;
                    break;
                }
            }


            if(ok)
            {
                length=length+word.length();
            }

        }

        return length;
        
    }
};