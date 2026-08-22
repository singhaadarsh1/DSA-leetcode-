class Solution {
public:
    bool checkDivisibility(int n) {
        int sum = 0;
        int product = 1;
        int num = n;
        while (n != 0) {
            int digit = n % 10;
            sum += digit;
            product *= digit;
            n /= 10;
        }
        int finalsum=product+sum;
        if(num%finalsum==0){
            return true;
        }
        return false;
        
    }
};