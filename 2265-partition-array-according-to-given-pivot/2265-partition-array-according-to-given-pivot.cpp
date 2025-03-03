class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        int n=nums.size();
        vector<int> res(n);
        
        //Throw ele<pivot in left basket and ele>pivot in right basket
        int left=0,right=n-1;
        int left_res=0,right_res=n-1;
        while(left<n){
            if(nums[left]<pivot)    res[left_res++]=nums[left];
            if(nums[right]>pivot)   res[right_res--]=nums[right];
            left++;
            right--;
        }
        //Now fill pivot ele in the middle part
        while(left_res<=right_res)
            res[left_res++]=pivot;
        return res;
    }
};