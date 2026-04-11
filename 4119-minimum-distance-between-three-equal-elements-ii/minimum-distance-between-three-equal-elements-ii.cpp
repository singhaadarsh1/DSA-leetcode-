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
                for (int m = 0; m <= v.size() - 3; m++) {
                    int i = v[m];
                    int j = v[m + 1];
                    int k=v[m+2];


                    mini = min(mini, abs(i-j)+abs(j-k)+abs(k-i));
                }
            }
            
        }
        if (mini == INT_MAX) {
                return -1;
            }
            return mini;
    }
};