class Solution {
public:
    int minimumSumSubarray(vector<int>& nums, int l, int r) {
        // Brute force , tc->0(n^2)
        /* int result = INT_MAX;
         int n = nums.size();
         for (int i = 0; i < n; i++) {
             int sum = 0;
             for (int j = i; j < n && (j - i + 1) <= r; j++) {
                 sum += nums[j];
                 if ((j - i + 1) >= l && sum > 0) {

                     result = min(result, sum);
                 }
             }
         }
         return result == INT_MAX ? -1 : result;*/

        // using prefix sum , optimized approach ,tc->o(n*(r-l+1));
        int n = nums.size();
        int result = INT_MAX;
        vector<int> prefix(n);
        prefix[0] = nums[0];
        for (int i = 1; i < n; i++) {
            prefix[i] = prefix[i - 1] + nums[i];
        }
        for (int i = 0; i < n; i++) {
            int sum = 0;
            for (int len = l; len <= r && i + len - 1 < n; len++) {
                int j = i + len - 1;
                if (i == 0) {
                    sum = prefix[j];
                } else {
                    sum = prefix[j] - prefix[i - 1];
                }
                if (sum > 0) {
                    result = min(result, sum);
                }
            }
        }
        return result == INT_MAX ? -1 : result;
    }
};