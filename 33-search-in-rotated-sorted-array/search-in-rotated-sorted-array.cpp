class Solution {
public:
int binarySearch(vector<int>& nums, int s, int e, int target) {
        int mid = s + (e - s) / 2;
        while (s <= e) {
            if (target == nums[mid]) {
                return mid;
            } else if (target > nums[mid]) {
                s = mid + 1;
            } else {
                e = mid - 1;
            }
            mid = s + (e - s) / 2;
        }
        return -1;
    }
    int search(vector<int>& nums, int target) {
        int n = nums.size();//esme pivot find kiya hai kyuki pivot smallest element hota hai
                            //aur pivot k pehle aur baad me sorted hoga element 

        int s = 0;
        int e = n - 1;
        int mid = s + (e - s) / 2;
        while (s < e) {
            if (nums[mid] >= nums[0]) {
                s = mid + 1;

            } else if (nums[mid] <= nums[0]) {
                e = mid;
            }
            mid = s + (e - s) / 2;
        }
        int pivot = e;
        // Step 2: Decide which part to do binary search on
        if (target >= nums[pivot] && target <= nums[n - 1]) {
            // search in right half
            return binarySearch(nums, pivot, n - 1, target);
        } else {
            // search in left half
            return binarySearch(nums, 0, pivot - 1, target);
        }
    }
};