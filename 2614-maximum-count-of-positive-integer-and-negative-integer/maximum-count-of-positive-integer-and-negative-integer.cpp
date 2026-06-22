class Solution {
public:
    int maximumCount(vector<int>& nums) {
        // brute force approach , tc-o(n);

        /*int ncnt=0;
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
        return max(ncnt,pcnt);*/

        // binary search using lower_bound and upper_bound, tc-o(logn);
        auto x = (lower_bound(nums.begin(), nums.end(), 0));
        auto y = (upper_bound(nums.begin(), nums.end(), 0));
        int n;
        int p;
        
        if (x - nums.begin() == y - nums.begin()) {
            n = (x - nums.begin()) - 0;
            p = nums.size() - (x - nums.begin());
        } else {
            p = nums.size()- (y - nums.begin());
            n = (x - nums.begin()) - 0;
        }
        return max(n, p);
    }
};