class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int a= nums[0];
        int b= nums[0];

        for (int i=1;i<nums.size();i++)
        {
            b=max(b+nums[i],nums[i]);
            a=max(a,b);
        }
        return a;
    }
};