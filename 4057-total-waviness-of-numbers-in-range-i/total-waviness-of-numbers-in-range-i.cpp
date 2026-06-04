class Solution {
public:
    vector<int> waive(int num) {
        vector<int> arr;
        while (num > 0) {
            int digit = num % 10;
            arr.push_back(digit);
            num /= 10;
        }
        reverse(arr.begin(), arr.end());
        return arr;
    }
    int totalWaviness(int num1, int num2) {
       /* int count = 0;
        int count2 = 0;
        int dupli=num1;
        int dupli2=num2;
        while (dupli > 0 && dupli2 > 0) {
            int digit = dupli % 10;
            count++;
            int digit1 = dupli2 % 10;
            count2++;
            dupli /= 10;
            dupli2 /= 10;
        }
        if (count < 3 && count2 < 3) {
            return 0;
        }*/
        int countwavy = 0;

        for (int i = num1; i <= num2; i++) {
            vector<int> res = waive(i);
            if(res.size()<3){
                continue;
            }
            for (int j = 1; j < res.size() - 1; j++) {
                if (res[j] > res[j - 1] && res[j] > res[j + 1] ||
                    res[j] < res[j - 1] && res[j] < res[j + 1]) {
                    countwavy++;
                }
            }
        }
        return countwavy;
    }
};