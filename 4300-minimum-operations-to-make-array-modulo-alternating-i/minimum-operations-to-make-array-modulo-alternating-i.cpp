class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
      /*  int n = nums.size();
        int mini = INT_MAX;
        int mini2 = INT_MAX;
        int i = 0;
        int miniop = 0;
        int neww;
        int new2;
        while (i < n) {
            if (i % 2 == 0) {
                neww = nums[i] % k;
                if (neww < k) {
                    mini = min(mini, neww);
                }
            } else  {
                 new2 = nums[i] % k;
                if (new2 < k && new2 != neww) {
                    mini2 = min(mini2, new2);
                }
            }
            i++;
        }
        for (int i = 0; i < nums.size(); i++) {
            if (i % 2 == 0 && nums[i] % k == mini && nums[i] % k < k) {
                continue;
            } else if (i % 2 != 0 && nums[i] % k == mini2 && nums[i] % k < k) {
                continue;
            } else if (i % 2 == 0 && (nums[i] - 1) % 2 == mini) {
                miniop++;

            } else if (i % 2 != 0 && (nums[i] + 1) % 2 == mini2) {
                miniop++;
            }
        }
        return miniop;*/
         vector<int> od, ev;
        int n = nums.size();
        for(int i=0; i<n; i++) {
            if(i & 1) od.push_back(nums[i]);
            else ev.push_back(nums[i]);
        }
        vector<pair<int, int>> vp, vpp;
        for(int i=0; i<k; i++) {
            int cnt1 = 0, cnt2 = 0;
            for(auto &j : od) {
                cnt1 += min(abs(i - (j % k)), k - abs(i - (j % k)));
            }
            for(auto &j : ev) {
                cnt2 += min(abs(i - (j % k)), k - abs(i - (j % k)));
            }
            vp.push_back({cnt1, i});
            vpp.push_back({cnt2, i});
        }
        sort(vp.begin(), vp.end());
        sort(vpp.begin(), vpp.end());
        if(vp[0].second == vpp[0].second) {
            return min(vp[0].first + vpp[1].first, vp[1].first + vpp[0].first);
        } else {
            return vp[0].first + vpp[0].first;
        }
        return -1;
    }
};