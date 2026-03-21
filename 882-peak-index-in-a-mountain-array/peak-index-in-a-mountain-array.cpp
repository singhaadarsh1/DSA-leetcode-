class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int s = 0;
        int e = arr.size() - 1;

        while (s < e) {
            int mid = s + (e - s) / 2;

            if (arr[mid] < arr[mid + 1]) {
                // increasing part → move right
                s = mid + 1;
            } else {
                // decreasing part → peak is at mid or left
                e = mid;
            }
        }

        return s; // or return e (both same here)
    }
};
