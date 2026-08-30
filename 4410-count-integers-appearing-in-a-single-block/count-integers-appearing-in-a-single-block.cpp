class Solution {
public:
    int countSpecialIntegers(vector<int>& nums) {
         unordered_set<int> special;
        unordered_set<int> invalid;

        int current = nums[0];
        special.insert(current);

        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] != current) {
                current = nums[i];

                if (special.count(current)) {
                    special.erase(current);
                    invalid.insert(current);
                }
                else if (!invalid.count(current)) {
                    special.insert(current);
                }
            }
        }

        return special.size();
       
    }
};