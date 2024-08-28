class Solution {
public:
    int function(vector<int>& nums, int k)
    {
        int l=0;
        int r=0;
        int count =0;

        if(k==0)
        {
            return 0;
        }

        map<int ,int>mpp;

        while(r<nums.size())
        {
            mpp[nums[r]]++;

            while(mpp.size()>k)
            {
                mpp[nums[l]]--;

                if(mpp[nums[l]]==0)
                {
                    mpp.erase(nums[l]);
                }
                l++;
            }

            count=count+(r-l+1);
            r++;
        }
        return count;
    }


    int subarraysWithKDistinct(vector<int>& nums, int k) {

        int i=function(nums,k);
        int j=function(nums,k-1);

        return (i-j);
        
        
    }
};