class Solution {
public:
    vector<int> findEvenNumbers(vector<int>& digits) {
        /*set<int> res;
        int num;
        for (int i = 0; i < digits.size(); i++) {
            for (int j = 0; j < digits.size(); j++) {
                for (int k = 0; k < digits.size(); k++) {
                    if (i == j || j == k || k == i) {
                        continue;
                    }
                    num = (digits[i] * 100) + (digits[j] * 10) + (digits[k] *
       1); if(num>=100 && num%2==0){ res.insert(num);
                    }
                }
            }
        }
       vector<int>st(res.begin(),res.end());
        return st;*/
        unordered_map<int, int> freq;
        vector<int> result;
        int nums;

        for (int num : digits) {
            freq[num]++;
        }
        
        for (int i = 1; i <= 9; i++) {
            if (freq[i] == 0)
                continue;
            freq[i]--;

            for (int j = 0; j <= 9; j++) {
                if (freq[j] == 0)
                    continue;
                freq[j]--;

                for (int k = 0; k <= 8; k += 2) {
                    if (freq[k] == 0)
                        continue;
                    freq[k]--;
                    nums =
                        (i * 100) + (j * 10) + (k * 1);
                    result.push_back(nums);
                    freq[k]++;
                }
                freq[j]++;
            }
            freq[i]++;
        }
        return result;
    }
};