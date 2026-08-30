class Solution {
public:
    long long MOD = 1000000007;
    
    long long power(long long x, long long y) {
        long long result = 1;
        while (y > 0) {
            if (y % 2 == 1) {
                result = (result * x) % MOD;
            }

            x = (x * x) % MOD;
            y /= 2;
        }

        return result;
    };
    int sumDecoded(vector<long long>& nums) {
        long long width;
        long long d;
        long long x;
        long long y;

        long long final = 0;
        for (int i = 0; i < nums.size(); i++) {
            width = nums[i] % 10;
            d = floor(nums[i] / 10);
            string s = to_string(d);
            x = stoll(s.substr(0, width));
            y = stoll(s.substr(width));
            long long decoded = power(x, y);
            final += decoded;
        }
        return final % MOD;
    }
};