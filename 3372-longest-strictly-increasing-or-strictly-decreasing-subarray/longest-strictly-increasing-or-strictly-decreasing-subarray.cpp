class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        int maxi = 1;
        
        for (int i = 0; i < nums.size() - 1; i++) {
            int count = 1;
            for (int j = i; j < nums.size() - 1; j++) {
                if (nums[j] < nums[j + 1]) {
                    count++;

                } else {
                    maxi = max(maxi, count);
                  
                    break;
                }
            }
             maxi=max(maxi,count);

        }
        for (int i = 0; i < nums.size() - 1; i++) {
            int count=1;
            for (int j = i; j < nums.size() - 1; j++) {
                if (nums[j] > nums[j + 1]) {
                    count++;

                } else {
                    maxi = max(maxi, count);
                  
                    break;
                }
            }
            maxi=max(maxi,count);
        }
        return maxi;
    }
};