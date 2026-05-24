class Solution {
public:
    vector<int> limitOccurrences(vector<int>& nums, int k) {
       /* int count = 1;
        int m=1;
        for (int i = 1; i < nums.size(); i++) {
            if (nums[i ] == nums[i -1]) {

                count ++;
            }
           else   {
                count=1;
            }
            if(count<=k){
                nums[m]=nums[i];
                    m++;
            }
        }
        nums.resize(m);
        return nums;
       /* vector<int> res;
        unordered_map<int, int> mp;
        int count = 0;
        for (int n : nums) {
            mp[n]++;
        }
        for (auto& it : mp) {
            if (it.second >= k) {
                while (count < k) {
                    res.push_back(it.first);
                    count++;
                }
                count = 0;

            } else {
                while (it.second != 0) {
                    res.push_back(it.first);
                    it.second--;
                }
            }
        }
        sort(res.begin(), res.end());
        return res;*/
         vector<int> res;
    unordered_map<int,int> mp;

    for(int n : nums){

        if(mp[n] < k){
            res.push_back(n);
            mp[n]++;
        }
    }

    return res;
    }
};