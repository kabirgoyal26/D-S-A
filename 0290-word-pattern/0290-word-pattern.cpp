class Solution {
public:
    bool wordPattern(string pattern, string s) {

        vector<string>words;

        stringstream ss(s);
        string token ;
        int counter=0;

        while (getline(ss,token,' '))
        {
            counter++;
            words.push_back(token);
        }    




        if (counter!=pattern.size())
        {
            return false ;
        }  


        unordered_map<char,string>mpp1;
        unordered_map<string,char>mpp2;

    for (int i = 0; i < pattern.size(); i++) {
            char ch1 = pattern[i];
            string ch2 = words[i];

            if ((mpp1.count(ch1) && mpp1[ch1] != ch2) || 
                (mpp2.count(ch2) && mpp2[ch2] != ch1)) {
                return false;
            }

            mpp1[ch1] = ch2;
            mpp2[ch2] = ch1;
        }


        return true ;

    }
};