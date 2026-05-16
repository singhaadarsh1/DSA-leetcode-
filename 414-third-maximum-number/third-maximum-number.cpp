class Solution {
public:
    int thirdMax(vector<int>& nums) {
        unordered_set<int> st;
        for (int n : nums) {
            st.insert(n);
        }
        vector<int> v(st.begin(), st.end());
        sort(v.begin(),v.end());
        int maxi = INT_MIN;
        for (int n:v) {
            maxi = max(maxi, n);
        }
        if (v.size() < 3) {
            return maxi;
        }
        
        int count = 1;
        for (int i = v.size() - 1; i >= 0; i--) {
            if (count == 3) {
                return v[i];
            } else {
                count++;
            }
        }
        return 0;
    }
};