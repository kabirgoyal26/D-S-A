class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        int r=0;
        int l=0;
        int maxlength=0;
        int n=fruits.size();
        unordered_map<int,int>mpp;
        
        
        while(r<n)
        {
            // map me push kardo 
            mpp[fruits[r]]++;
            
           while(mpp.size()>2)
            {
                // map se bahar nikaldo 
                mpp[fruits[l]]--;
                // agar while hoga 2n hojaye complexity
                if( mpp[fruits[l]]==0)
                {
                    //delete kardo map se 
                    mpp.erase( fruits[l]);
                }
                l++;
            }
            
            if(mpp.size()<=2)
            {
                maxlength=max(maxlength,r-l+1);
            }
            
            
            
            r++;
        }
        return maxlength;
        
    }
};