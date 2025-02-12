class Solution {
public:
    int maximumSum(vector<int>& nums) {

        unordered_map<int,int>mpp;
        int ans=-1;

        for (int i=0;i<nums.size();i++)
        { 
            int sum=0;
            int temp=nums[i];
            while(temp)
            {
                sum=sum+(temp%10);
                temp=temp/10;
            }
            if (mpp.find(sum)!=mpp.end())
            {
                ans=max(ans,nums[i]+mpp[sum]);

                if (nums[i]>mpp[sum])
                {
                    mpp[sum]=nums[i];
                }

            }
            else
            {
                mpp[sum]=nums[i];
            }
        }
        return ans ;
    }
};