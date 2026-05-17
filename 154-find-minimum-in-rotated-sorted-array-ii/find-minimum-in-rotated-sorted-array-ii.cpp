class Solution {
public:
    int findMin(vector<int>& nums) {
        int mini=INT_MAX;
        int n=nums.size();
        for(int i=0;i<n;i++){
            mini=min(mini,nums[i]);
        }
       // for(int i=0;i<n;i++){
           // if(nums[i]==mini&& i==0){
               // return nums[i];
           // }
            int idx = min_element(nums.begin(), nums.end()) - nums.begin();
            int k=idx-0;
            rotate(nums.begin(),nums.begin()+k,nums.end());

            
        //}
        return nums[0];
    
        
    
        
    }
};