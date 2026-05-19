class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        //brute force approach . time complexity ->o(n^2)
        /* unordered_map<int,int> mp;
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
         return ans;*/
         //approach 2 , still the , time complexity only reach upto  o(nlogn+,logm)
       /* sort(nums1.begin(), nums1.end());
        sort(nums2.begin(), nums2.end());

        unordered_set<int> st;
        int n = nums1.size();
        int m = nums2.size();
        int i = 0;
        int j = 0;
        while (i < n && j < m) {
            if (nums1[i] == nums2[j]) {
                st.insert(nums1[i]);
                i++;
                j++;
            } else if (nums1[i] < nums2[j]) {
                i++;
            } else {
                j++;
            }
        }
        return vector<int>(st.begin(), st.end());
        */
        //approach 3 using hashset , most optimal , time complexity only o(n+m)
        unordered_set<int> st(nums1.begin(), nums1.end());
        unordered_set<int> ans;

        for (int x : nums2) {
            if (st.count(x)) {
                ans.insert(x);
            }
        }

        return vector<int>(ans.begin(), ans.end());
    }
};