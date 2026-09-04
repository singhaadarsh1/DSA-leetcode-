class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
         int maxi =INT_MIN;
        
         //int m=0;
         int i=0;
         while(i<nums.size()){
            maxi=max(maxi,nums[i]);
             int mini=INT_MAX;
              
            for(int j=i;j<nums.size();j++){
                mini=min(mini,nums[j]);
            }
            int ans=maxi-mini;
            if(ans<=k){
                return i;
            }
             i++;
         
         }
         return -1;

     }
};