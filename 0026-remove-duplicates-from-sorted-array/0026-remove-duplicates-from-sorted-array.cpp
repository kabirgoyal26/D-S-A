class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i=0;

        
        for (int j : nums )
        {
            if ( i<1 || j>nums[i-1] )
            {
                nums[i]=j;
                i++;
            }

        }
        return i;
    }
};