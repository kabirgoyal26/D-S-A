class Solution {
public:
    vector<int> constructTransformedArray(vector<int>& nums) {

        int n=nums.size();

 
        vector<int>result(n) ;

        for (int i=0;i<nums.size();i++)
        {
            if (nums[i]==0)
            { 

                result[i]=nums[i];
            }
            else if (nums[i] > 0) { // Move to the right
                int k = (i + (nums[i] % n)) % n; // Wrap around if index goes out of bounds
                result[i] = nums[k];
            } 
            else if (nums[i] < 0) { // Move to the left
                int l = (i + (nums[i] % n) + n) % n; // Handle negative wrapping
                result[i] = nums[l];
            }
        }
        return result ;
    }
};