
class Solution {
public:
    int findMin(vector<int>& nums) {
    
        
       int n=nums.size();
        int s = 0;
        int e = nums.size() - 1;
        int mid = s + (e - s) / 2;
        while (s < e) {
            if (nums[mid] <= nums[n-1]) {
                e = mid;
            } else if (nums[mid] >= nums[n-1]) {
                s = mid + 1;
            }
            mid = s + (e - s) / 2;
        }
        return nums[s];
    }
};
