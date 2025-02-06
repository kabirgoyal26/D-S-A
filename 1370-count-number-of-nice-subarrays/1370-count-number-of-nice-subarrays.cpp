class Solution {
public: 
    int function(vector<int>& nums, int k)
    {
        int l=0;
        int r=0;

        int count=0;

        int ans=0 ;



        while (r<nums.size())
        {

            if (k<0)
            {
                return 0;
            }
            if (nums[r]%2!=0)
            {
                count++;
            }

            while (count>k)
            {
                if (nums[l]%2!=0)
                {
                    count--;
                }
                l++;
            }

            if (count<=k)
            {
                ans= ans + (r-l+1);
            }

            r++;
        }
        return ans;

    }
    int numberOfSubarrays(vector<int>& nums, int k) {

        return function(nums,k)-function(nums,k-1);
    }
};