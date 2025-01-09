class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {

        int n=nums.size();
         
         vector <int >ans (n,-1);

         stack<int>st;

         for (int i=2*nums.size()-1;i>=0;i--)
         {
            while (!st.empty() &&  st.top()<=nums[i%nums.size()])
            {
                st.pop();
            }
            if (i<nums.size())
            {
                ans[i]=st.empty()?-1:st.top();
            }
           


            st.push(nums[i%nums.size()]);
         }
       return ans ; 
    }
};