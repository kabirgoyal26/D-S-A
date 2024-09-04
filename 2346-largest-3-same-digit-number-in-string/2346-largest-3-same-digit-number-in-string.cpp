class Solution {
public:
    string largestGoodInteger(string num) {
        string ans = "";

        for (int i=0;i<=num.length()-3;i++)
        {
            string substring = num.substr(i,3);

            if(substring[0]==substring[1] && substring[1]==substring[2])
            {
                if(substring>ans)
                {
                    ans=substring;
                }
            }
        }

        return ans;


       

        
    }
};