class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        unordered_map<int, int> mp;
        mp[0] = 1;
        int n = nums.size();
        int prefix = 0;
        int count = 0;
        // prefix[0]=nums[0];
        for (int i = 0; i < n; i++) {
            prefix += nums[i];
            if (mp.find(prefix - goal) != mp.end()) {
                count += mp[prefix - goal];
            }
            mp[prefix]++;
        }
        return count;
    }
};