#include <vector>
#include <algorithm> // For std::sort

class Solution {
public:
    void merge(vector<int>& nums1, int m,vector<int>& nums2, int n) {
        int i = 0; 
        int j = 0; 
        
      
        while (i < m && j < n) {
            if (nums1[i] == 0) {
                nums1[i] = nums2[j];
                j++;
            }
            i++;
        }
        
        while (j < n) {
            nums1[i++] = nums2[j++];
        }
        
        
       sort(nums1.begin(), nums1.end());
    }
};
