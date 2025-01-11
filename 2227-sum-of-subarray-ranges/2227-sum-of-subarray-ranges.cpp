class Solution {
public:
    long long subArrayRanges(vector<int>& nums) {

        int n= nums.size();
        long long  sum=0;

        for (int i=0;i<n;i++)
        {
            long long max=nums[i];
            long long min=nums[i];

            for (int j=i;j<n;j++)
            {
                if (nums[j]>max)
                {
                    max=nums[j];
                }
                else if (nums[j]<min)
                {
                    min=nums[j];
                }

                long long  range=max-min;
                sum=sum+range;
            }
        }
       return sum; 
    }
};