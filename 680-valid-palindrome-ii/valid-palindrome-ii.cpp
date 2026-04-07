class Solution {
public:
    bool ispalindrome(string& s, int l, int r) {
        while (l <= r) {
            if (s[l] != s[r]) {
                return false;
            } else {
                l++;
                r--;
            }
            
        }
        return true;
    }
    bool validPalindrome(string& s) {
        int n = s.size();
        int st = 0;
        int e = n - 1;
        while (st <= e) {
            if (s[st] != s[e]) {
                return (ispalindrome(s, st + 1, e) ||
                        ispalindrome(s, st, e - 1));
            }
            st++;
            e--;
        }
        return true;
    }
};