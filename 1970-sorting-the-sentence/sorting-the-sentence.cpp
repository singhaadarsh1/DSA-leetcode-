class Solution {
public:
    string sortSentence(string s) {
        // vector<string>ans;
        stringstream ss(s);
        string word;
        unordered_map<string, vector<int>> mp;
        while (ss >> word) {
            int n = word.back() - '0';
            string actual = word.substr(0, word.size() - 1);
            mp[actual].push_back(n);
        }
        vector<pair<int, string>> neww;
        for (auto& it : mp) {
            string word = it.first;
            for (int pos : it.second) {
                neww.push_back({pos, word});
            }
        }
        sort(neww.begin(), neww.end());
        string ans = "";
        for (auto& it1 : neww) {
            ans += it1.second;
            ans += ' ';
        }
        ans.pop_back();
        return ans;
    }
};