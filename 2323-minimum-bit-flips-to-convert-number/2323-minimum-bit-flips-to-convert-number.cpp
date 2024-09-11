class Solution {
public:
    int minBitFlips(int start, int goal) {
        // XOR to get the differing bits, then count the number of set bits
        return __builtin_popcount(start ^ goal);
    }
};
