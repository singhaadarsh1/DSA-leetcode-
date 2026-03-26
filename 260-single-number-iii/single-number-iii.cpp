class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        unordered_map<int,int>freq;
        vector<int>result;
        for(int num:nums){
            freq[num]++;

        }
        for(auto&it:freq){
            if(it.second==1){
                result.push_back(it.first);
            }

        }
        return result;
        
        
    }
};