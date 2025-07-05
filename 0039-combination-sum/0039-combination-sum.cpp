class Solution {
public:

    void fun(int index,vector<int>& candidates,int k,vector<vector<int>> &ans,vector<int> &ds)
    {
        if (index==candidates.size())
        {
            if (k==0)
            {
                ans.push_back(ds);
            }
            return ;
        }

        if (candidates[index]<=k)
        {
            ds.push_back(candidates[index]);
            fun(index,candidates,k-candidates[index],ans,ds);
            ds.pop_back();

        }
        fun(index+1,candidates,k,ans,ds);


    }




    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {

        vector<vector<int>>ans;
        vector<int>ds;

        fun(0,candidates,target,ans,ds);
        return ans ;
    }
};