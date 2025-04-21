class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {

        int count =0;
        int presum=0;

        unordered_map<int,int>mpp;

        mpp[0]=1;

        for (int i=0;i<nums.size();i++)
        {
            presum=presum+nums[i];

            int tofind =presum-k;

            count += mpp[tofind];

            mpp[presum]+=1;
        }
        return count ;
    }
};