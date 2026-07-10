class Solution {
public:
    bool isMiddleElementUnique(vector<int>& nums) {
        int middle = nums.size() / 2;
        int mid=nums[middle];
        unordered_map<int, int> mp;
        for (int n : nums) {
            mp[n]++;
        }
        for (auto& it : mp) {
            if (it.first == mid && it.second == 1) {
                return true;
            }
        }
        return false;
    }
};