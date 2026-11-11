class Solution {
public:
    bool isSubsequence(string s, string t) {
        int st = 0;
        int st1 = 0;

        while (st < s.size() && st1 < t.size()) {
            if (s[st] == t[st1]) {
                st++;
                st1++;
            } else {
                st1++;
            }
        }
        return st == s.size();
    }
};