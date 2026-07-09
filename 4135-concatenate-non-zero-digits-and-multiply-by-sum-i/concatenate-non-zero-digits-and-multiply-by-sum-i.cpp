class Solution {
public:
    long long sumAndMultiply(int n) {

        /*long long nonzeroes = 0;
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
        return finaldigit * nonzeroes;*/
         long long sum = 0;
        long long num = 0;
        long long place = 1;

        while (n > 0) {
            int digit = n % 10;

            if (digit != 0) {
                sum += digit;
                num += 1LL * digit * place;
                place *= 10;
            }

            n /= 10;
        }

        return num * sum;
    }
};