class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        // this will give integer overflow because of larger integer product and
        // sum
        /* vector<int> arr;
         long long prod = 1;
         long long final = 0;
         for (int i = digits.size() - 1; i >= 0; i--) {
             final += digits[i] * prod;
             prod = prod * 10;
         }
         long long n = final + 1;
         while (n > 0) {
             int digit = n % 10;
             arr.push_back(digit);
              n = n / 10;
         }
         reverse(arr.begin(), arr.end());
         return arr;*/
         int n=digits.size();
        for (int i = n - 1; i >= 0; i--) {
            if (digits[i] < 9) {
                digits[i]++;
                return digits;
            }
            digits[i] = 0;
        }
        digits.insert(digits.begin(), 1);
        return digits;
    }
};