class Solution {
public:
    int getCommon(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;
        int mini = INT_MAX;
        set_intersection(nums1.begin(), nums1.end(), nums2.begin(), nums2.end(),
                         inserter(ans, ans.begin()));
        for (int i = 0; i < ans.size(); i++) {
            mini = min(mini, ans[i]);
        }
        return mini==INT_MAX?-1:mini;
    }
};