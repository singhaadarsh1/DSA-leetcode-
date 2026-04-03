class Solution {
public:
    int countSegments(string s) {
        if (s.find_first_not_of(' ') == string::npos) {
            return 0;
        }
        int count = 0;
        bool wordstart = false;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] != ' ' && wordstart == false) {
                count++;
                wordstart = true;
            }
            if (s[i] == ' ') {
                wordstart = false;
            }
        }
        return count;
    }
};