class Solution {
public:
    vector<string> topKFrequent(vector<string>& words, int k) {
        unordered_map<string, int> freq;
        for (string s : words) {
            freq[s]++;
        }
        vector<pair<string, int>> neww(freq.begin(), freq.end());
        sort(neww.begin(), neww.end(),
             [](pair<string, int>& a, pair<string, int>& b) {
                 if (a.second == b.second) {
                     return a.first < b.first;
                 }
                 return a.second > b.second;
             });
        vector<string> ans;
        for (auto& it : neww) {
            if (k == 0) {
                break;
            }
            ans.push_back(it.first);
            k--;
        }
        return ans;
    }
};