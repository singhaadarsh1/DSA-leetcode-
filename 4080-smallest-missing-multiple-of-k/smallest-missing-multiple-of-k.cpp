class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {

        /* for (int i = 1; i <= nums.size()+1 ; i++) {
             if (find(nums.begin(), nums.end(), k * i) == nums.end()) {
                 return k * i;
             } else {
                 continue;
             }
         }
         return 0;*/
        unordered_set<int> st;
        for (int n : nums) {
            st.insert(n);
        }
        int i = 1;
        for (auto & it : st) {

            if (st.find(k * i) == st.end()) {
                return k * i;

            } else {
                i++;
                continue;
            }
            
        }
        return k*i;
    }
};