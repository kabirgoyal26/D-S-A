class Solution {
public:
    int numberOfMatches(int n) {

        int totalmatches=0;
        int k=n;

        while(k>1)
        {
            int matchesplayed=0;
            if(k%2==0)
            {
                matchesplayed=k/2;
                totalmatches=totalmatches+matchesplayed;
                k=k/2;

            }
            else
            {
                matchesplayed=(k-1)/2;
                totalmatches=totalmatches+matchesplayed;
                k=((k-1)/2)+1;
            }
        }

        return totalmatches;
        
    }
};