class Solution {
public:
    int getCommon(vector<int>& nums1, vector<int>& nums2) {
        //1st method using c++stl , tc->o(n+m), sc->o(k)
        /* vector<int> ans;
         int mini = INT_MAX;
         set_intersection(nums1.begin(), nums1.end(), nums2.begin(),
         nums2.end(), inserter(ans, ans.begin())); for (int i = 0; i <
         ans.size(); i++) { mini = min(mini, ans[i]);
         }
         return mini==INT_MAX?-1:mini;
         */
         //method 2 using two pointer , reduce sc from o(k) to o(1);

        int n = nums1.size();
        int m = nums2.size();
        int i = 0;
        int j = 0;
        while (i < n && j < m) {
            if (nums1[i] == nums2[j]) {
                return nums1[i];
            } else if (nums1[i] > nums2[j]) {
                j++;
            } else {
                i++;
            }
        }
        return -1;
    }
};