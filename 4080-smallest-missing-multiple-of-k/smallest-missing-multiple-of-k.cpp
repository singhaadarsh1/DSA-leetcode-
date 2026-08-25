class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        /* vector<int> arr;
         for (int i = 0; i < nums.size(); i++) {
             if (nums[i] % 2 == 0) {
                 arr.push_back(nums[i]);
             }
         }
         int count = 1;*/
        for (int i = 1; i <= nums.size()+1 ; i++) {
            if (find(nums.begin(), nums.end(), k * i) == nums.end()) {
                return k * i;
            } else {
                continue;
            }
        }
        return 0;
    }
};