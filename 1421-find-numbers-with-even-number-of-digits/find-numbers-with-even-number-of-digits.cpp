class Solution {
public:
    int findNumbers(vector<int>& nums) {
        /* vector<int> res;
           vector<int> countt;
         for (int i = 0; i < nums.size(); i++) {
             if (nums[i] % 2 == 0) {
                 res.push_back(nums[i]);
             }
         }
         for (int i = 0; i < res.size(); i++) {

             int cnt = 0;
             int n=res[i];

             while (n >0) {
                n= n / 10;
                 cnt++;
             }
             countt.push_back(cnt);
         }
         int cntt = 0;
         for (int i = 0; i < countt.size(); i++) {
             if (countt[i] % 2 == 0) {
                 cntt++;
             }
         }
         return cntt;*/
        vector<int> res;
        
        
        for (int i = 0; i < nums.size(); i++) {
            int n = nums[i];
            int cnt = 0;
            while (n > 0) {
                n = n / 10;
                cnt++;
            }
            if (cnt % 2 == 0) {
                res.push_back(cnt);
            }
        }
        
        return res.size();
    }
};