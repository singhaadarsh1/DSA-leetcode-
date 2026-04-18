class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        /* string ans = "";
         for (int c : nums) {
             ans+=c;
         }
         string s = "";
         for (int i = 0; i < nums.size(); i++) {
             s+=(nums[i]);
         }
         string temp = ans + s;
         vector<int> res;
         for (int i = 0; i < temp.size(); i++) {
             res.push_back(temp[i]);
         }
         return res;
         vector<int>res(2n)
         for(int x:nums){
             res.push_back(x);
         }
         for(int x:nums){
             res.push_back(x);
         }
         return res;*/
        int n = nums.size();
        vector<int> ans;
        for (int i = 0; i < 2* n; i++) {
            if (i < n) {
                ans.push_back(nums[i]);
            } else {
                ans.push_back(nums[i - n]);
            }
        }
        return ans;
    }
};
