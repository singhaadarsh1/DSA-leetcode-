class Solution {
public:
    bool absent(string s) {
        int count = 0;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == 'A') {
                count++;
            }
        }
        if (count < 2) {
            return true;
        }
        return false;
    }
    bool late(string s) {
        for (int i = 0; i < s.size() - 2; i++) {
            if (s[i] == 'L' && s[i + 1] == 'L' && s[i + 2] == 'L') {
                return false;
            }
        }
        return true;
    }
    bool checkRecord(string s) {
        if (s.size() < 3) {
            return absent(s);
        }

        absent(s);
        late(s);
        

        return absent(s) && late(s);
    }
};