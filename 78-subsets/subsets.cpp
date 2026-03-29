class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>>ans;
        int n =nums.size();
        for(int i=0;i<(1<<n);i++){
            vector<int>subset;
            for(int k=0;k<n;k++){
                if(i&(1<<k)){
                    subset.push_back(nums[k]);
                }
            }
            ans.push_back(subset);
        }
        return ans;

        
    }
};