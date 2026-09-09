class Solution {
public:
    long long countCommas(long long n) {
        long long final = 0;
        long long start = 1000;
        int commas = 1;
        while (start <= n) {
            long long exit = start * 1000 - 1;

            long long count = min((long long)n, exit) - start + 1;
            if (count > 0) {
                final += count * commas;
            }
            start *= 1000;
            commas++;
        }
        return final;
    }
};