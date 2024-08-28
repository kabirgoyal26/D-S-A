class Solution {
public:

    int function(vector<int>& nums, int goal)
    {
        int l=0;
        int r=0;
        int count=0;
        int sum=0;

        int n= nums.size();

        if(goal<0)
        {
            return 0;
        }

        while(r<n)
        {
            sum=sum+nums[r];

            while(sum>goal)
            {
                sum=sum-nums[l];
                l++;
            }

            count = count + (r-l+1);
            r++;
        }
        return count ;
    }
    int numSubarraysWithSum(vector<int>& nums, int goal) {


        int i= function(nums,goal);
        int j= function(nums,goal-1);

        return i-j;


        // esme presum vala concept lag sakta ha 
        /*

        int count=0;
        int presum=0;
        map<int,int>mpp;

        // mpp[0] =1 jarrori ha 
        mpp[0]=1;


        for(int i=0;i<nums.size();i++)
        {
            presum=presum+nums[i];

            int remove = presum-goal;

            count = count + mpp[remove];

            mpp[presum]= mpp[presum]+1;
        }
        return count ;
        */


        
    }
};