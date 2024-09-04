class Solution {
public:
    string largestGoodInteger(string num) {
        // string ans = "";

        // for (int i=0;i<=num.length()-3;i++)
        // {
        //     string substring = num.substr(i,3);

        //     if(substring[0]==substring[1] && substring[1]==substring[2])
        //     {
        //         if(substring>ans)
        //         {
        //             ans=substring;
        //         }
        //     }
        // }

        // return ans;


        char ans=' ';

        for (int i=2;i<num.length();i++)
        {
            if(num[i]==num[i-1] && num[i-2]==num[i-1])
            {
                ans = max(ans,num[i]);
            }
        }


        if(ans==' ')
        {
            return "";
        }

        return string(3,ans);
       


       

        
    }
};