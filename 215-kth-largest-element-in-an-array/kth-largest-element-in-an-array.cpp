class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int count=1;
        for(int i=nums.size()-1;i>=0;i--){
            if(count==k){
                return nums[i];
            }
            count++;
        }
        return 0;
        
    }
};