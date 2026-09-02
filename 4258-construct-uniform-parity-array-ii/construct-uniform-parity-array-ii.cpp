class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
        int even = 0;
        int odd = 0;
        int mineven = INT_MAX;
        int minodd = INT_MAX;

        for (int i = 0; i < nums1.size(); i++) {
            if (nums1[i] % 2 == 0) {
                mineven = min(mineven, nums1[i]);

                even++;
            } else {
                minodd = min(minodd, nums1[i]);
                odd++;
            }
        }
        if (even == 0 || odd == 0) {
            return true;
        }
        bool makeodd = true;
        for (int x : nums1) {
            if (x % 2 == 0) {
                if (minodd == INT_MAX || x <= minodd) {
                    makeodd = false;
                    break;
                }
            }
        }
        if (makeodd) {
            return true;
        }
        bool makeeven = true;
        for (int x : nums1) {
            if (x % 2 != 0) {
                if (mineven == INT_MAX || x <= minodd) {
                    makeeven = false;
                    break;
                }
            }
        }

        return makeeven;
    }
};