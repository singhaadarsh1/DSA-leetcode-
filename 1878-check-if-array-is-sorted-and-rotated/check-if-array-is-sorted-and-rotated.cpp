class Solution {
public:
    bool check(vector<int>& nums) {
        vector<int> arr = nums;
        sort(arr.begin(), arr.end());

        for (int i = 0; i < nums.size(); i++) {
            bool sorted = true;

            for (int j = 0; j < nums.size(); j++) {
                if (nums[j] != arr[(j + i) % nums.size()]) {
                    sorted = false;
                    break;
                }
            }

            if (sorted) {
                return true;
            }
        }

        return false;
    }
};