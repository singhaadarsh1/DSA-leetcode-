class Solution {
public:
    int getCommon(vector<int>& nums1, vector<int>& nums2) {
        /* vector<int> ans;
         int mini = INT_MAX;
         set_intersection(nums1.begin(), nums1.end(), nums2.begin(),
         nums2.end(), inserter(ans, ans.begin())); for (int i = 0; i <
         ans.size(); i++) { mini = min(mini, ans[i]);
         }
         return mini==INT_MAX?-1:mini;
         */
         vector<int>arr;
        int n = nums1.size();
        int m = nums2.size();
        int i = 0;
        int j = 0;
        while (i<n&& j<m) {
            if (nums1[i] == nums2[j]) {
                arr.push_back(nums1[i]);
                i++;
                j++;
            } else if (nums1[i] > nums2[j]) {
                j++;
            } else {
                i++;
            }
        }
        int mini = INT_MAX;
        for (int i = 0; i < arr.size(); i++) {
            mini = min(mini, arr[i]);
        }
        return mini == INT_MAX ? -1 : mini;
    }
};