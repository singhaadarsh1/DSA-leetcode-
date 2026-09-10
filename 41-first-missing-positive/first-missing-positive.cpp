class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {

        long long mini = LLONG_MAX;
        long long maxi = LLONG_MIN;
        for (int i = 0; i < nums.size(); i++) {
            mini = min(mini, (long long)nums[i]);
            maxi = max(maxi, (long long)nums[i]);
        }
        if (maxi < 1) {
            return 1;
        }
        if (mini != 1 && mini > 0) {
            return 1;
        }
        unordered_set<int>st(nums.begin(),nums.end());
        for (int i = 1; i < maxi; i++) {
            if (st.find(i)==st.end()) {
                return i;
            } 
        }
        return maxi + 1;
    }
};