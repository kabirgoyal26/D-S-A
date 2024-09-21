class Solution {
public:
     static bool myfunction(int a , int b )
     {
        
        
            return to_string(a) < to_string(b); 
        
     }


    vector<int> lexicalOrder(int n) {

        vector<int>nums;

        for (int i=1;i<=n;i++)
        {
            nums.push_back(i);
        }

        sort(nums.begin(),nums.end(),myfunction);

        return nums;
        
    }
};