class Solution {
public:
    vector<int> resultArray(vector<int>& nums) {
        vector<int> one;
        vector<int> two;

        int left = 0;
        int right = 0;
        for (int i = 1; i <= nums.size(); i++) {
            if (i == 1) {
                one.push_back(nums[i - 1]);

            } else if (i == 2) {
                two.push_back(nums[i - 1]);
            } else if (one[left] > two[right]) {
                one.push_back(nums[i - 1]);
                left++;
            } else {
                two.push_back(nums[i - 1]);
                right++;
            }
        }
        one.insert(one.end(), two.begin(), two.end());
        return one;
    }
};