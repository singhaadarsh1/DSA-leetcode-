class Solution {
public:
    int reverse(int i) {

        int rev = 0;
        while (i > 0) {
            rev = rev * 10 + (i % 10);
            i /= 10;
        }
        return rev;
    }
    int minMirrorPairDistance(vector<int>& nums) {
        int n = nums.size();
        int mini = INT_MAX;
        unordered_map<int, int> mp;
        for (int i = 0; i < n; i++) {
            int rev = reverse(nums[i]);
            if (mp.find(nums[i]) != mp.end()) {
                mini = min(mini, abs(i - mp[nums[i]]));
            }

            mp[rev] = i;
        }
        return mini == INT_MAX ? -1 : mini;
    }
};