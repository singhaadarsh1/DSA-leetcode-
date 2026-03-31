class Solution {
public:
    bool detectCapitalUse(string word) {
        map<char, int> lowermap;
        map<char, int> uppermap;
        map<char, int> mixedmap;
        for (char ch : word) {

            // mixed → store everything
            mixedmap[ch]++;

            if (ch >= 'a' && ch <= 'z') {
                lowermap[ch]++;
            } else if (ch >= 'A' && ch <= 'Z') {
                uppermap[ch]++;
            }
        }
        int cnt = 0;
        for (auto& it : lowermap) {
            cnt += it.second;
        }
        if (cnt == word.size()) {
            return true;
        }
        int cntt = 0;
        for (auto& it : uppermap) {
            cntt += it.second;
        }
        if (cntt == word.size()) {
            return true;
        }
        if (isupper(word[0])) {
            bool ok = true;

            for (int i = 1; i < word.size(); i++) {
                if (!islower(word[i])) {
                    ok = false;
                    break;
                }
            }

            if (ok)
                return true;
        }

        return false;
    }
};