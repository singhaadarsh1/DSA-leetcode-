class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        if(nums.size()==1){
            return 1;
        }
        int maxi = *max_element(nums.begin(), nums.end());
        int mini = *min_element(nums.begin(), nums.end());
        int count = 0;
        int count2 = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == maxi) {
                break;
            }
            count++;
        }
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == mini) {
                break;
            }
            count2++;
        }
        int maxi2 = max(count+1, count2+1);
        int count3 = 0;
        int count4 = 0;
        for (int i = nums.size() - 1; i >= 0; i--) {
            if (nums[i] == maxi) {
                break;
            }
            count3++;
        }
        for (int i = nums.size() - 1; i >= 0; i--) {
            if (nums[i] == mini) {
                break;
            }
            count4++;
        }
        int maxi3 = max(count3+1, count4+1);
        int count5 = 0;
        int count6=0;
        
        for(int i=0;i<nums.size();i++){
            if(nums[i]==mini||nums[i]==maxi){
                break;
            }
            count5++;
            
        }
        for(int i=nums.size()-1;i>=0;i--){
            if(nums[i]==mini||nums[i]==maxi){
                break;
            }
            count6++;
        }
        int maxi4=count5+count6+2;
        
        return min({maxi2,maxi3,maxi4});
       
    }
};