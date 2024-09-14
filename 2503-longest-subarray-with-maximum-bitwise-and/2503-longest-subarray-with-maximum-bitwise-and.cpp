class Solution {
public:
    int longestSubarray(vector<int>& nums) {

        int maxelement=0;
        int streak=0;
        int count=0;


        for (int i=0;i<nums.size();i++)
        {
            if (maxelement<nums[i])
            {
                maxelement=nums[i];
                streak=0;
                count=0;
            }

            if (maxelement==nums[i])
            {
                streak++;
            }
            else 
            {
                streak=0;
            }

            count =max(count,streak);
        }

        return count;
        
    }
};