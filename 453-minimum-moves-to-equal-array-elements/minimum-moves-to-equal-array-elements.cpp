class Solution {
public:
    int minMoves(vector<int>& nums) {

        //int n = nums.size();
        //int ops = 0;
//brute force
/*
        while (true) {

            // Check whether all elements are equal
            bool allEqual = true;

            for (int i = 1; i < n; i++) {
                if (nums[i] != nums[0]) {
                    allEqual = false;
                    break;
                }
            }

            if (allEqual)
                break;

            // Find maximum element index
            int maxIndex = 0;

            for (int i = 1; i < n; i++) {
                if (nums[i] > nums[maxIndex]) {
                    maxIndex = i;
                }
            }

            // Increment all elements except maximum
            for (int i = 0; i < n; i++) {
                if (i != maxIndex) {
                    nums[i]++;
                }
            }

            ops++;
        }

        return ops;*/
        int ops=0;
        int mini=*min_element(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++){
            ops+=nums[i]-mini;
            
        }
        return ops;

    }
};
