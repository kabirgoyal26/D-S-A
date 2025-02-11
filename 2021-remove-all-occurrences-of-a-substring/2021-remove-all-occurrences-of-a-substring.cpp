class Solution {
public:
    string removeOccurrences(string s, string part) {


        while(s.find(part)!=string::npos)
        {
            int a = s.find(part);

            s= s.substr(0,a)+s.substr(a+part.size());
        }

        return s;
        
    }
};