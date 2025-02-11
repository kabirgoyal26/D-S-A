class Solution {
public:
    int missingNumber(vector<int>& nums) {
        sort(nums.begin(), nums.end());  // Sort the array

        // Check if the first number is 0 (it should be)
        if (nums[0] != 0) {
            return 0;
        }

        // Check for the missing number by looking for the gap between consecutive numbers
        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] - nums[i - 1] != 1) {
                return nums[i - 1] + 1;  // The missing number is between nums[i-1] and nums[i]
            }
        }

        // If no gap is found, the missing number is n (because the array contains 0 to n-1)
        return nums.size();
    }
};
