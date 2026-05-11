class Solution {
public:
    int countPairs(vector<int>& nums, int target) {
        // sort(nums.begin(), nums.end());
        int s = 0;
        int e = s + 1;
        int n = nums.size();
        int count = 0;
        while (s < n - 1) {
            if (e == n) {
                s++;
                e = s + 1;
                continue;
            } else if (nums[s] + nums[e] < target) {
                count++;
            }
            e++;
        }
        return count;
    }
};