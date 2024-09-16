class Solution {
public:
    int findMinDifference(vector<string>& timePoints) {

        vector<int>minutesover;
        

        for (string i : timePoints)
        {
           
                int hours=(i[0]-'0')*10 + (i[1]-'0');
                int min=(i[3]-'0')*10 + (i[4]-'0');

                int total=hours*60+min;

                minutesover.push_back(total);
        }

        int mintime=INT_MAX;


        sort(minutesover.begin(),minutesover.end());
        int n= minutesover.size();

        for (int i = 1; i < n; i++) {
            mintime = min(mintime, minutesover[i] - minutesover[i - 1]);
        }

        

        mintime=min(mintime,1440-minutesover[n-1]+minutesover[0]);
        

        
        return mintime;

        
    }
};