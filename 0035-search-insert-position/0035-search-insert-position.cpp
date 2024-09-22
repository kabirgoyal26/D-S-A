// class Solution {
// public:
//     int searchInsert(vector<int>& nums, int target) {

//         int i=0;

//         while( i<nums.size() && nums[i]<=target )
//         {
//             if (nums[i]==target)
//             {
//                 return i;
//             }
//             i++;
//         }
//         return i;
//     }
// };
class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int r=nums.size();
        int l=0;
        int m;
        int ans=-1;
        if(target>nums[r-1]){
            return r;
        }
        while(l<=r){
            m=l+(r-l)/2;
            if(nums[m]>=target){
                ans=m;
                r=m-1;
            }
            else{
                l=m+1;
            }
        }
        return ans;
    }
};