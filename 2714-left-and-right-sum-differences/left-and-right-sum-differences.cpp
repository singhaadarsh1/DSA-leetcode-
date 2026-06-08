class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        vector<int> arrleft;
        vector<int> arrright;
        vector<int> res;
        int leftsum = 0;
        int rightsum = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (i == 0) {
                leftsum = 0;
                arrleft.push_back(leftsum);
            } else {
                leftsum += nums[i-1];
                arrleft.push_back(leftsum);
            }
        }
        for (int i = nums.size() - 1; i >= 0; i--) {
            if (i == nums.size() - 1) {
                rightsum = 0;
                arrright.push_back(rightsum);
            } else {
                rightsum += nums[i+1];
                arrright.push_back(rightsum);
            }
        }
        reverse(arrright.begin(),arrright.end());
        int i = 0;
        int j = 0;
        while (i < arrleft.size() && j < arrright.size()) {
            res.push_back(abs(arrleft[i] - arrright[j]));
            i++;
            j++;
        }
        return res;
    }
};