class Solution {
public:
    int lengthOfLastWord(string s) {
        int cnt = 0;
        bool wordstart = false;
        for (int i = s.size() - 1; i >= 0; i--) {
            if (s[i] == ' ' && wordstart) {
                break;
            }
            if (s[i] != ' ') {
                wordstart = true;
                cnt++;
            }
           
        }
         return cnt;
    }
};