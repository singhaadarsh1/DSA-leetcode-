class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int> mp;
        unordered_map<int,int> mp1;
        for (int i : nums1) {
            mp[i]++;
        }
        for (int j : nums2) {
            mp1[j]++;
        }
        vector<int> ans;
        for (auto& it : mp) {
            for (auto& it1 : mp1) {
                if (it.first == it1.first) {
                    ans.push_back(it.first);
                }
            }
        }
        return ans;
    }
};