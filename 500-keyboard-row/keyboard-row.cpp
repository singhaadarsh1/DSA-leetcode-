class Solution {
public:
    vector<string> findWords(vector<string>& words) {
        vector<string> rows = {"qwertyuiop", "asdfghjkl", "zxcvbnm"};

        unordered_map<char, int> row1, row2, row3;

        for (char c : rows[0]) row1[c]++;
        for (char c : rows[1]) row2[c]++;
        for (char c : rows[2]) row3[c]++;

        vector<string> ans;

        for (string word : words) {
            bool r1 = true, r2 = true, r3 = true;

            for (char c : word) {
                c = tolower(c);

                if (row1.find(c) == row1.end()) r1 = false;
                if (row2.find(c) == row2.end()) r2 = false;
                if (row3.find(c) == row3.end()) r3 = false;
            }

            if (r1 || r2 || r3) {
                ans.push_back(word);
            }
        }

        return ans;
    }
};