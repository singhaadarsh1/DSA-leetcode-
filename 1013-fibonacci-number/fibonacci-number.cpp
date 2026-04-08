class Solution {
public:
    int fibTabSpaceOptimized(int n) {
        int prev = 0;
        if (n == 0)
            return 0;
        int curr = 1;
        for (int i = 2; i <= n; i++) {
            int ans = prev + curr;
            prev = curr;
            curr = ans;
        }
        return curr;
    }
    int fib(int n) {
        /*   if (n == 0) {
               return 0;
           } else if (n == 1) {
               return 1;
           }
           return fib(n - 1) + fib(n - 2);*/

        return fibTabSpaceOptimized(n);
    }
};