class Solution {
public:
    
    int getLucky(string s, int k) {

        int sum=0;

        for(char & i : s)
        {
            int val=i-'a'+1;
            sum=sum+(val<10?val:(val%10 + val/10));
        }
        
        k=k-1;

        while (k>0)
        {

            int newsum=0;
            while (sum>0)
            {
                newsum=newsum+(sum%10);
                sum=sum/10;
            }
           
            sum=newsum;
            k--;
        }


        return sum;
        
    }
};