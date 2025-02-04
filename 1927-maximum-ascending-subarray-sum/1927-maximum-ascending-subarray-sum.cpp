class Solution {
public:
    int maxAscendingSum(vector<int>& nums) {

       
         int ans =0;
         int temp=0;

        


        for (int i=0;i<nums.size();i++)
        {
            temp=temp+nums[i];
            ans = max(ans,temp);

            if  (i+1 <nums.size()&& nums[i+1]<=nums[i] )
            {
               temp =0;
            }
           

            
        }
        return ans ;
    }
};