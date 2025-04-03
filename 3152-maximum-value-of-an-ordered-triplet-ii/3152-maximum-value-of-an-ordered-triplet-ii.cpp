class Solution {
public:
    long long maximumTripletValue(vector<int>& nums) {

        int n = nums.size();
        long long ans = 0;

        
        vector<long long> rightmax(n);
        
        
        long long maxelement = nums[n - 1];
       

        
        for (int i = n - 2; i >= 0; i--) {
            rightmax[i] = maxelement;
            maxelement = max(maxelement, (long long)nums[i]); 
        }

        
        long long a = nums[0];
        for (int j = 1; j < n - 1; j++) {
            long long b = nums[j];
            long long c = rightmax[j];
            long long diff = a - b;
            long long multi = diff * c;

            a=max(a,(long long )nums[j]);

            ans = max(ans, multi);
        }

        return ans;
    }
};
