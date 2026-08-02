class Solution {
public:
    long long maxPairStrength(vector<int>& nums) {
        long long  maxi=1LL *INT_MIN;
        for(int i=0;i<nums.size()-1;i++){
            for(int j=i+1;j<nums.size();j++){
                long long x=1LL* nums[i]*nums[j];
                long long y=1LL* gcd(nums[i],nums[j]);
                long long  z=1LL* y*y;
                maxi=max(maxi,(x/z));
            }
        }
        return maxi;
        
    }
};