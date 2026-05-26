class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        int n = nums.size();

        vector<pair<int, int>> ans1, ans2;

        for (int want = 0; want < k; want++) {

            int c1 = 0, c2 = 0;

            for (int i = 0; i < n; i++) {

                int val = nums[i] % k;

                if (i % 2 == 0) {

                    c1 += min(abs(val - want), k - abs(val - want));
                } else {

                    c2 += min(abs(val - want), k - abs(val - want));
                }
            }

            ans1.push_back({c1, want});
            ans2.push_back({c2, want});
        }

        sort(ans1.begin(), ans1.end());
        sort(ans2.begin(), ans2.end());

        int res = INT_MAX;

        for (int i = 0; i < 2; i++) {

            for (int j = 0; j < 2; j++) {

                if (ans1[i].second != ans2[j].second) {

                    res = min(res, ans1[i].first + ans2[j].first);
                }
            }
        }

        return res;
    }
};