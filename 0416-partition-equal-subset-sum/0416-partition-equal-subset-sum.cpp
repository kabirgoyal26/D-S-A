class Solution {
public:
    bool canPartition(vector<int>& nums) {
        int size = nums.size();
        int sum=0;
        for(int i=0; i<size; i++){
            sum = sum+nums[i];
        }
        if(sum % 2 == 1){
            return false;// so this is the base case if the sum is odd we cannot divide it into two subsets...
        }
        int target = sum/2;
        vector<int>dp(target+1,false);
        dp[0]=true;//so this is the base case for dp...
        for(int i=0; i<size; i++){
            for(int j=target; j>=nums[i]; j--){
                dp[j] = dp[j] || dp[j-nums[i]];
            }
        }
        return dp[sum/2];
        
    }
};