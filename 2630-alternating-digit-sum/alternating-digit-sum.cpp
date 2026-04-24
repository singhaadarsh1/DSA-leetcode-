class Solution {
public:
    int alternateDigitSum(int n) {
        vector<int> arr;
        while (n > 0) {
            int digit = n % 10;
            arr.push_back(digit);
            n /= 10;
        }
        reverse(arr.begin(), arr.end());
        int sum = 0;
        for (int i = 0; i < arr.size(); i++) {
            if (i % 2 == 0) {
                sum += arr[i];
            } else {
                sum -= arr[i];
            }
        }
        return sum;
    }
};