class Solution {
public:
    int maxProduct(vector<int>& nums) {

        int ans =INT_MIN;

        for(int i=0;i<nums.size();i++)
        {
            for(int j=i+1;j<nums.size();j++)
            {
                int val=(nums[i]-1)*(nums[j]-1);
                ans =max(ans,val);
            }
        }
        return ans ;
        
    }
};