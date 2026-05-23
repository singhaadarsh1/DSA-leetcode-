class Solution {
public:
    int minimumSwaps(vector<int>& nums) {
        if (find(nums.begin(), nums.end(), 0) == nums.end()) {
            return 0;
        }
        int n = nums.size();
        int i = 0;
        int j = n - 1;
        int count = 0;
        while (i < j && j < n) {
            if (nums[i] == 0 && nums[j] == 0) {
                j--;
            } else if (nums[i] == 0) {
                int temp = nums[i];
                nums[i] = nums[j];
                nums[j] = temp;
                count++;
                i++;
                j--;

            } else if (nums[j] == 0) {
                j--;
            } else {
                i++;
                
            }
        }

        return count;
    }
};