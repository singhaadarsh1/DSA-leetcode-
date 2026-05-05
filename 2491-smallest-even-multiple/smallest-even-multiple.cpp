class Solution {
public:
    int smallestEvenMultiple(int n) {
        int m = n * 2;
        int t = 1;
        while (t <= m) {
            if (t % 2 == 0 && t % n == 0) {
                return t;
            }
            t++;
        }
        return 0;
    }
};