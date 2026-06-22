class Solution {
public:
    int maximumCount(vector<int>& nums) {
        int mini=INT_MIN;
        int maxi=INT_MAX;
        int ncnt=0;
        int pcnt=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]<0){
                ncnt++;
            }else if(nums[i]>0){
                pcnt++;
            }else{
                continue;
            }
        }
        return max(ncnt,pcnt);
        
    }
};