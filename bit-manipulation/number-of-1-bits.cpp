class Solution {
public:
    int hammingWeight(int n) {
        int res = 0;
        for (int i = 0; i < 32; i++) {
            if ((n >> i) & 1) {
                res += 1;
            }
        }
        return res;
    }
};
// Topic: Bit Manipulation
// Problem: Number of 1 Bits,pb no-191
// LeetCode: https://leetcode.com/problems/number-of-1-bits/
