class Solution {
public:
    int minimumDistance(vector<int>& nums) {
        unordered_map<int, vector<int>> mp;
        for (int i = 0; i < nums.size(); i++) {
            mp[nums[i]].push_back(i);
        }
        int mini = INT_MAX;
        for (auto& it : mp) {
            int i, k;
            if (it.second.size() >= 3) {
                vector<int>& v = it.second;
                for (int j = 0; j <= v.size() - 3; j++) {
                    int i = v[j];
                    int k = v[j + 2];
                    

                    mini = min(mini, (2 * (k - i)));
                }
            }
            
        }
        if (mini == INT_MAX) {
                return -1;
            }
            return mini;
    }
};