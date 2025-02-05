class Solution {
public:
    int function(vector<int>& nums, int goal)
    {
        int l=0;
        int r=0;
        int ans =0;
        int sum=0;

        while (r<nums.size())
        {
            if (goal<0)
            {
                return 0;
            }
            sum= sum + nums[r];

            while (sum>goal)
            {
                sum=sum-nums[l];
                l++;

            }

           ans = ans + (r-l+1);
            r++;
        }
        return ans;

    }
    int numSubarraysWithSum(vector<int>& nums, int goal) {

        return function(nums,goal)-function(nums,goal-1);
        
    }
};