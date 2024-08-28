class Solution {
public:
// consider odd numbers as 1 \
// even as 0 
// sum==k 

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
            sum=sum+(nums[r] % 2);

            while(sum>goal)
            {
                sum=sum-(nums[l] % 2);
                l++;
            }

            count = count + (r-l+1);
            r++;
        }
        return count ;
    }

    int numberOfSubarrays(vector<int>& nums, int k) {

        int i= function(nums,k);
        int j= function(nums,k-1);

        return i-j; 
        

        

        
        
    }
};