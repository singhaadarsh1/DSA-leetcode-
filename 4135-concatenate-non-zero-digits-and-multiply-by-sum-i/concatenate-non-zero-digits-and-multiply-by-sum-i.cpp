class Solution {
public:
    long long sumAndMultiply(int n) {

        long long nonzeroes = 0;
        vector<int> res;
        int digit;
        while (n) {
            digit = n % 10;
            if (digit != 0) {
                res.push_back(digit);
                nonzeroes += digit;
            }
            n = n / 10;
        }

        long long val = 1;
        long long finaldigit=0;
        for (int i = 0; i < res.size(); i++) {
            finaldigit +=  res[i] * val;
            val *= 10;
        }
        return finaldigit * nonzeroes;
    }
};