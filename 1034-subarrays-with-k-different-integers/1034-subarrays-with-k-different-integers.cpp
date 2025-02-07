class Solution {
public:
    int function(vector<int>& nums, int k)
    {
        int l=0;
        int r=0;

        int ans=0;

        unordered_map<int,int>mpp;

        while(r<nums.size())
        {
            mpp[nums[r]]++;

            while (mpp.size()>k)
            {
                mpp[nums[l]]--;

                if (mpp[nums[l]]==0)
                {
                    mpp.erase(nums[l]);
                }
                l++;
            }

            
            ans = ans + r-l+1;
            r++;
        }
        return ans ;
    }
    int subarraysWithKDistinct(vector<int>& nums, int k) {


        

        return function(nums,k)-function(nums,k-1);

       

    }
};