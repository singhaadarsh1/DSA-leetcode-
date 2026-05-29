class Solution {
public:
    int minElement(vector<int>& nums) {
        vector<int> arr;
        for (int i = 0; i < nums.size(); i++) {
            int j = nums[i];
            int digit;
            int sum = 0;
            while (j > 0) {
                digit = j % 10;
                sum += digit;
                j = j / 10;
            }
            nums[i]=sum;
        }
        int mini = INT_MAX;
        for (int i = 0; i < nums.size(); i++) {
            mini = min(mini, nums[i]);
        }
        return mini;
    }
};