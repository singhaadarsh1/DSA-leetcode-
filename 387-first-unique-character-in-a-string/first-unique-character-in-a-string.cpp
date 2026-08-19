class Solution {
public:
    int firstUniqChar(string s) {
        for (int i = 0; i < s.size(); i++) {

            // First occurrence must be i
            if (s.find(s[i]) != i)
               continue;

            // No occurrence after i
            if (s.find(s[i], i + 1) == string::npos)
                return i;
        }

        return -1;
    }
};