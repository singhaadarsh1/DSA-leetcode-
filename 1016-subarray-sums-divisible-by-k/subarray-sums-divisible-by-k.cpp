class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        // brute force-tc =o(n^2)
       /* int count=0;
        
        for (int i = 1; i < nums.size(); i++) {
            nums[i] += nums[i-1];
        }
        for (int i = 0; i < nums.size(); i++) {
            for (int j = i; j < nums.size(); j++) {
                if (i == 0) {
                    if (nums[j] % k == 0) {
                        count++;
                    }
                } else if ((nums[j] - nums[i - 1]) % k == 0) {
                    count++;
                }
            }
        }
        return count;*/

        //optimized approach->prefix sum+hashing, tc=o(n)
        unordered_map<int, int> mp;
        int prefix = 0;
        int count = 0;
        mp[0] = 1;
        for (int i = 0; i < nums.size(); i++) {
            prefix += nums[i];
            int rem = prefix % k;
            if (rem < 0) { // handle negative remainder
                rem += k;
            }
            if (mp.find(rem) != mp.end()) {
                count += mp[rem];
            }
            mp[rem]++;
        }
        return count;
        
    }
};