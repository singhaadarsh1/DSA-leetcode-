class Solution {
public:
    int countPrimes(int n) {
        /*int cnt = 0;//brute force

        for (int i = 2; i < n; i++) {
            bool isprime = true;
            for (int j = 2; j < i; j++) {
                if (i % j == 0) {
                    isprime = false;
                    break;
                }
            }
            if (isprime) {
                cnt++;
            }
        }
        return cnt;*/
        vector<int> prime(n + 1);
        int count=0;
        if(n==0||n==1){
            return 0;
        }
        for (int i = 2; i < n; i++) {

            prime[i] = 1;
        }
        for (int i = 2; (i * i) <= n; i++) {
            if (prime[i] == 1) {
                for (int j = i * i; j <= n; j += i) {
                    prime[j] = 0;
                }
            }
        }
        for(int i=2;i<n;i++){
            if(prime[i]==1){
                count++;
            }
        }
        return count;
    }
};