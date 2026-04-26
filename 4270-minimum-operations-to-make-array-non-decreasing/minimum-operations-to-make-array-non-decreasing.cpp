class Solution {
public:
    long long minOperations(vector<int>& nums) {
        int n = nums.size();
        /* vector<long long> incr(n, 0);
          long long z = nums[0];
          incr[0] = 0;
          for (int i = 1;i < n; i++) {
              z = max(z, (long long)nums[i]);
              incr[i] = z - nums[i];
          }
          long long sum = incr[0];
          for (int i = 1; i < n; i++) {
              if (incr[i] > incr[i - 1]) {
                  sum += (incr[i] - incr[i - 1]);
              }
          }*/
        long long sum = 0;
        for (int i = 0; i < n - 1; i++) {
            if (nums[i] > nums[i + 1]) {
                sum += (nums[i] - nums[i + 1]);
            }
        }
        return sum;
    }
};