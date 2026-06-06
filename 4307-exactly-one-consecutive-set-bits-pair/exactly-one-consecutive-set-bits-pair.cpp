class Solution {
public:
    vector<int> to_binary(int num) {
        vector<int> res;
        //if (num == 0) {
           // res.push_back(0);
           // return res;
       // }

        while (num > 0) {
            int digit = num % 2;
            res.push_back(digit);
            num = num / 2;
        }
        reverse(res.begin(), res.end());
        return res;
    }
    bool consecutiveSetBits(int n) {
        int cnt=0;
        vector<int> arr = to_binary(n);
        for (int i = 0; i+1 < arr.size(); i++) {
            if (arr[i] == arr[i + 1] && arr[i] == 1) {
                cnt++;
            }
        }
        return cnt==1;
    }
};