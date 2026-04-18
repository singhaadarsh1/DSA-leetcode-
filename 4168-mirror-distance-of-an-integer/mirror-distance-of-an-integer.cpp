class Solution {
public:
    int rev(int i) {
        int ans = 0;
        while (i > 0) {
            int digit=i%10;
            ans =ans*10+digit;
            i = i / 10;
        }
        return ans;
    }
    int mirrorDistance(int n) { return abs( n - rev(n)); }
};