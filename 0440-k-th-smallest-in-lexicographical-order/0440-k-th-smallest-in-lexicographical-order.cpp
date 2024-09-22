// class Solution {
// public:

//     static bool myfunction(int a , int b )
//     {
//         return to_string(a)<to_string(b);
//     }
//     int findKthNumber(int n, int k) {

//         vector<int>nums;

//         for (int i=1;i<=n;i++)
//         {
//             nums.push_back(i);
//         }

//         sort(nums.begin(),nums.end(),myfunction);


//         int ans =nums[k-1];

//         return ans;
        
//     }
// };
class Solution {
 public:
  int findKthNumber(int n, int k) {
    long ans = 1;

    for (int i = 1; i < k;) {
      const long gap = getGap(ans, ans + 1, n);
      if (i + gap <= k) {
        i += gap;
        ++ans;
      } else {
        ++i;
        ans *= 10;
      }
    }

    return ans;
  }

 private:
  long getGap(long a, long b, long n) {
    long gap = 0;
    while (a <= n) {
      gap += min(n + 1, b) - a;
      a *= 10;
      b *= 10;
    }
    return gap;
  };
};