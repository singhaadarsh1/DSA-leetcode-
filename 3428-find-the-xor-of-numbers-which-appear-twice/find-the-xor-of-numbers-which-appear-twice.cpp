class Solution {
public:
    int duplicateNumbersXOR(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<int>result;
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i]==nums[i+1]){
                result.push_back(nums[i]);
            }
        }
        if(result.empty()){
            return 0;
        }
    
        int xorr=0;
        for(int i=0;i<result.size();i++){
            xorr^=result[i];
        }
        return xorr;
    }
};