class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        int n = letters.size();
        int s = 0;
        int e = n - 1;
        int mid = s + (e - s) / 2;
        char ans = letters[0];
        while (s <= e) {
            if (letters[mid] == target && s == n - 1) {
                return letters[0];
            } else if (letters[mid] == target) {
                //ans = letters[mid];
                s++;
            } else if (letters[mid] < target) {
                s++;

            } else {
                ans = letters[mid];
                e--;
            }
            mid = s + (e - s) / 2;
        }
        return ans;
    }
};