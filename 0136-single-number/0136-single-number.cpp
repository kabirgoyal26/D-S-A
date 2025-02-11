class Solution {
public:
    int singleNumber(vector<int>& nums) {

        int ans ;

        if (nums.size()==1)
        {
            ans =nums[0];
           return ans ;

        }

        unordered_map<int,int>mpp;

        for (int i=0;i<nums.size();i++)
        {
            mpp[nums[i]]++;
        }
        
       for (auto it : mpp)
       {
        if (it.second==1)
        {
            ans=it.first;
            break;
        }
       }


       return ans ;
    }
};