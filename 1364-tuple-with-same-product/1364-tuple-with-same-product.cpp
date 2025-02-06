class Solution {
public:
    int tupleSameProduct(vector<int>& nums) {

        int count =0;
       

        unordered_map<int,int>mpp;

        for (int i=0;i<nums.size();i++)
        {
            for (int j=i+1;j<nums.size();j++)
            {
                mpp[nums[i]*nums[j]]++;
            }
        }

        for (auto [a,b]:mpp)
        {
            int n= b;
            count=count+(8*(n*(n-1))/2);
        }
        return count;
    }
};