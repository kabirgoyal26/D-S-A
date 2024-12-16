class Solution {
public:

    int findlocmin(vector<int>& nums)
    {
        int min=INT_MAX;
        int loc ;
        for (int k=0;k<nums.size();k++)
        {
            if (nums[k]<min)
            {

                min=nums[k];
                loc=k;
            }
        }
        return loc;

    }
    vector<int> getFinalState(vector<int>& nums, int m, int multiplier) {


        for (int i=0;i<m;i++)
        {
            int a= findlocmin(nums);

            nums[a]=nums[a]*multiplier;

        }

        return nums;
        
    }
};