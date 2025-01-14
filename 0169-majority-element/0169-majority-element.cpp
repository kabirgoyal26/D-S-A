class Solution {
public:
    int majorityElement(vector<int>& nums) {


        int count =1;
        int element=nums[0];
        for (int i=1;i<nums.size();i++)
        {
            if (element==nums[i])
            {
                count=count+1;
            }
            else if (count==0)
            {
                element=nums[i];
            }
            else 
            {
                count=count-1;
            }

        }
        return element;
    }
};