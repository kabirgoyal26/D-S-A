class Solution {
public:
    void moveZeroes(vector<int>& nums) {

        int i=0;

        int zero=0;

        for (int j=0;j<nums.size();j++)
        {
            if (nums[j]!=0)
            {
                nums[i]=nums[j];
                i++;
            }
            else if (nums[j]==0)
            {
                zero++;
            }
        }

       while(zero--)
       {
        nums[i]=0;
        i++;
       }
        
    }
};