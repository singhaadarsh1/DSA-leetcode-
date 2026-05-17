class Solution {
public:
    long long power(long long x, int k) {
        long long ans = 1;
        while (k--) {
            ans *= x;
        }
        return ans;
    }
    int countKthRoots(int l, int r, int k) {
        if (k == 1) {
            int count = 0;
            int i = l;
            while (i <= r) {
                count++;
                i++;
            }
            return count;
        }
        int count = 0;
        long long x = 0;
        while (true) {
            long long value = power(x, k);
            if (value > r) {
                break;
            } else if (value >= l) {
                count++;
            }
            x++;
        }
        return count;
    }
};