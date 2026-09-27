class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> ans;
        unordered_set<int> st;
        vector<int>final;

        while (!nums.empty()) {
            for (int n : nums) {
                st.insert(n);
            }
            vector<int> neww(st.begin(), st.end());
            sort(neww.begin(), neww.end());
            for (int i = 0; i < neww.size(); i++) {
                ans.push_back(neww[i]);
            }
            for(int i=0;i<ans.size();i++){
                final.push_back(ans[i]);
            }

            for (int i = 0; i < ans.size(); i++) {
                auto it = find(nums.begin(), nums.end(), ans[i]);
                if (it != nums.end()) {
                    nums.erase(it);
                }
            }
            ans.clear();
            st.clear();
        }
        //ans.push_back();
        return final;
    }
};