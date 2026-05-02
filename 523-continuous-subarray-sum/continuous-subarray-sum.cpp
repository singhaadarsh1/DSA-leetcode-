class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        // brute force, tc->0(n^2);
        /* for (int i = 1; i < nums.size(); i++) {
             nums[i] += nums[i - 1];
         }
         int prod;
         if(nums.size()<2){
             return false;
         }
         for (int i = 0; i < nums.size(); i++) {
             for (int j = i+1; j < nums.size(); j++) {
                 if (i == 0) {
                     prod = nums[j] % k;

                     if (prod == 0) {
                         return true;
                     }
                 } else {
                     prod = (nums[j] - nums[i - 1]) % k;
                     if (prod == 0) {
                         return true;
                     }
                 }
             }
         }
         return false;*/
        // optimized approach , tc->o(n)
        unordered_map<int, int> mp;
        mp[0] = -1;
        int prefix = 0;
        for (int i = 0; i < nums.size(); i++) {
            prefix += nums[i];
            int rem = prefix % k;
            if (rem < 0) {
                rem += k;
            }
            if (mp.find(rem) != mp.end()) {
                if (i - mp[rem] >= 2) {
                    return true;
                }
                
            } else {
                mp[rem] = i;
            }
        }
        return false;
    }
};