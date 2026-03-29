class Solution {
public:
    int minAbsoluteDifference(vector<int>& nums) {
       /* int ans = INT_MAX;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == 1) {
                for (int j = 0; j < nums.size(); j++) {
                    if (nums[j] == 2) {
                        ans=min(ans,abs(i-j));
                    }
                }
            }
        }
        return ans==INT_MAX ?-1:ans;*/
        int lastone=-1;
        int lasttwo=-1;
        int ans=INT_MAX;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==1){
                lastone=i;
                if(lasttwo!=-1){
                    ans=min(ans,abs(lastone-lasttwo));
                }

            }else if(nums[i]==2){
                lasttwo=i;
                if(lastone!=-1){
                    ans=min(ans,abs(lastone-lasttwo));
                }
            }
        }
        return ans==INT_MAX ?-1:ans;
    }
};