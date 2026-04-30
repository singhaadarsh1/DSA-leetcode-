class Solution {
public:
    int largestInteger(vector<int>& nums, int k) {
        vector<vector<int>> result;
        for (int i = 0; i <= nums.size() - k; i++) {
            vector<int> temp;
            for (int j = i; j < i + k; j++) {
                temp.push_back(nums[j]);
            }
            result.push_back(temp);
        }
        unordered_map<int, int> mp;

        for (int m = 0; m < result.size(); m++) {
            unordered_set<int> st;
            for (int j = 0; j < result[m].size(); j++) {
                st.insert(result[m][j]);
            }
            for (auto& x : st) {
                mp[x]++;
            }
        }
        int maxi = -1;
        for (auto& it : mp) {
            if (it.second == 1) {
                maxi = max(maxi, it.first);
            }
        }
        return maxi;
    }
};