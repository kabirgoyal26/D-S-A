class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {

        priority_queue<int>q;

        for (int i=0;i<nums.size();i++)
        {
            q.push(nums[i]);
        }


        for (int j=1;j<k;j++)
        {
            q.pop();
        }

        return q.top();
        
    }
};