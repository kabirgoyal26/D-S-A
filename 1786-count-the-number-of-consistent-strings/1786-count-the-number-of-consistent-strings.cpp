class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {

        unordered_map<char,int>mpp;
        int ans=0;

        for ( char i: allowed)
        {
            mpp[i]++;
        }


        for (string c : words)
        {
            bool m = false ;
            for(char j : c)
            {
                if(mpp.find(j)!=mpp.end())
                {
                    m=true;
                }
                else 
                {
                    m=false;
                    break;
                }
            
            }

            if (m)
            {
                ans++;
            }

        }

        return ans ;
        
    }
};