class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        long long xorr = 0;
        for (int i = 0; i < nums.size(); i++) {
            xorr = xorr ^ nums[i];
        }
        
       long long  rightmost =  (xorr & (xorr - 1)) ^ xorr;
        int bucket1 = 0;
        int bucket2 = 0;
        for (int i = 0; i < nums.size() ; i++) {
            if ((nums[i] & rightmost) == 0) {
                bucket1 = bucket1 ^ nums[i];
            } else {
                bucket2 = bucket2 ^ nums[i];
            }
        }
        return {bucket1, bucket2};
    }
};