class Solution {
public:
    
    void fun(vector<int>& nums,vector<vector<int>> &ans,  vector<int>&ds,int temp[])
    {
        if (ds.size()==nums.size())
        {
            ans.push_back(ds);
            return ;
        }

        for (int i=0;i<nums.size();i++)
        {
            if (temp[i]!=1)
            {
                ds.push_back(nums[i]);
                temp[i]=1;
                fun(nums,ans,ds,temp);
                temp[i]=0;
                ds.pop_back();
            }
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {

        vector<vector<int>> ans ;
        vector<int>ds;
        int n = nums.size();
        int temp[n];
        memset(temp, 0, sizeof(temp));

        fun(nums,ans,ds,temp);

        return ans ;
        
    }
};