class Solution {
public:
    int numberOfSpecialChars(string word) {
        vector<char> alphabetsmall;
        unordered_set<char>st;
        for(int i=0;i<word.size();i++){
            st.insert(word[i]);
        }

        int count = 0;
        for (auto&it:st) {
            if (it >= 'a' && it <= 'z') {
                alphabetsmall.push_back(it);
            }
        }
        for (auto&it:st) {
            if (it >= 'A' && it <= 'Z') {
                if (find(alphabetsmall.begin(), alphabetsmall.end(),
                         tolower(it)) != alphabetsmall.end()) {
                    count++;
                }
            } else {
                continue;
            }
        }
        return count;
    }
};