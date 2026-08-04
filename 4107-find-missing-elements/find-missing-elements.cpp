class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        vector<int>ans;
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int start=nums[0];
        int end=nums[n-1];
        while(start!=end){
            if(find(nums.begin(), nums.end(), start + 1) == nums.end()){
                ans.push_back(start+1);
                
            }
            start++;
        }
        return ans;

       
        
    }
};