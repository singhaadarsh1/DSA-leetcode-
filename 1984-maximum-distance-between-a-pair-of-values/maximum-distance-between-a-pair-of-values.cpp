class Solution {
public:
    int maxDistance(vector<int>& nums1, vector<int>& nums2) {
        int maxi = 0;
        int i = 0;
        int j = 0;
        while (i < nums1.size() && j < nums2.size()) {
            if (i <= j && nums1[i] <= nums2[j]) {
            maxi=max(maxi,(j-i));
            j++;
            } else if (nums1[i] > nums2[j]) {
                i++;
                j++;
            } else if (i < nums1.size() && j >= nums2.size()) {
                j = i;
            }
        }
        return maxi;
    }
};