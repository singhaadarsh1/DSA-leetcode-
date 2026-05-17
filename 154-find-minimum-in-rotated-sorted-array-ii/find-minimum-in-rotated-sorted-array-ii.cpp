class Solution {
public:
    int findMin(vector<int>& nums) {
        //brute force approach,tc=o(n)
       /* int n = nums.size();
        
        
        int idx = min_element(nums.begin(), nums.end()) - nums.begin();
        int k = idx - 0;
        rotate(nums.begin(), nums.begin() + k, nums.end());

        
        return nums[0];*/
        //optimized(binary search approach),tc->o(logn)
         int n=nums.size();
        int s = 0;
        int e = nums.size() - 1;
        int mid = s + (e - s) / 2;
        while (s < e) {
            if (nums[mid] <nums[n-1]) {
                e = mid;
            } else if (nums[mid] >nums[n-1]) {
                s=mid+1;
            }else if(nums[mid]==nums[n-1]&&nums[s]<nums[n-1]){
                e--;
            }
            else if(nums[mid]==nums[n-1]){
                s++;
            }
            mid = s + (e - s) / 2;
        }
        return nums[s];
        
        
    }
};