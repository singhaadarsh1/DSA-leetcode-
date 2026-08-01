class Solution {
public:
    int gcdOfOddEvenSums(int n) {
       /* int sumeven = 0;// tc-o(n)
        int sumodd = 0;
        int count = 1;
        int digit = 1;
        while (count <= n) {
            if (digit % 2 == 0) {
                sumeven += digit;
                count++;
                
            }
            digit++;
        }
        int digit2 = 1;
        int count2=1;
        while (count2 <= n) {
            if (digit2 % 2 != 0) {
                sumodd += digit2;
                count2++;
                
            }
            digit2++;
        }
        return gcd(sumodd,sumeven);*/
        int sumOdd = n * n; //tc-o(1)
        int sumEven = n * (n + 1);
        return gcd(sumOdd, sumEven);
    }
};