class Solution {
public:
    int countSpecialIntegers(vector<int>& nums) {
        unordered_map<int, int> mp;
        for (int n : nums) {
            mp[n]++;
        }
        int count = 0;
        vector<int> neww;
        for (auto& it : mp) {
            if (it.second == 3) {
                for (int i = 0; i < nums.size(); i++) {
                    if (it.first == nums[i]) {
                        neww.push_back(i);
                    }
                }
                for (int i = 0; i < neww.size(); i++) {
                    if ((neww[1] - neww[0]) == (neww[2] - neww[1])) {
                        count++;
                    }
                    neww.clear();
                }
            }
        }
        return count;
    }
};