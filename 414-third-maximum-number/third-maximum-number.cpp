class Solution {
public:
    int thirdMax(vector<int>& nums) {
        /* unordered_set<int> st;
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
         return 0;*/
         long l = LONG_MIN;
        long s = LONG_MIN;
        long t = LONG_MIN;
        int n = nums.size();
        
      
        for (int i = 0; i < n; i++) {
            if (nums[i] > l) {
                t = s; s = l; l = nums[i];
            } else if (nums[i] > s && nums[i] != l) {
                t = s;
                s = nums[i];
            } else if (nums[i] > t && nums[i] != s && nums[i]!=l) {
                t = nums[i];
            } else {
                continue;
            }
        }
        return (t==LONG_MIN)?l:t;
        
    }
};