class Solution {
public:
    int countDigits(int num) {
        vector<int> arr;
        int original = num;
        if (original == 0) {
            return 0;
        }

        while (original > 0) {
            int digit = original % 10;
            arr.push_back(digit);
            original = original / 10;
        }
        int count = 0;
        for (int i = 0;i < arr.size(); i++) {

            if (num % arr[i] == 0) {
                count++;
            }
        }

        return count;
    }
};