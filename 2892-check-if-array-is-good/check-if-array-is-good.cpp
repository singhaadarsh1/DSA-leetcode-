class Solution {
public:
    bool isGood(vector<int>& nums) {
        int n = nums.size();

        //sort(nums.begin(), nums.end());
        int maxi = INT_MIN;
        for (int i = 0; i < n; i++) {
            maxi = max(maxi, nums[i]);
        }
        unordered_map<int, int> mp;
        for (int n : nums) {
            mp[n]++;
        }
        if (n <= maxi || n > maxi+1) {
            return false;
        }
        if(mp[maxi]!=2){
           return false;
        }

        for (auto& it : mp) {
            if (it.second > 1 && it.first != maxi) {
                return false;
            }
        }

        return true;
    }
};