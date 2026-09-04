class Solution {
public:
    double solve(double x, long long n) {
        if (n == 0) {
            return 1;
        }

        double half = solve(x, n / 2);

        double result = half * half;

        if (n % 2 == 1) {
            result = x * result;
        }

        return result;
    }
    double myPow(double x, int n) {
        long long power = n;

        if (power < 0) {
            x = 1 / x;
            power = -power;
        }

        return solve(x, power);
    }
};