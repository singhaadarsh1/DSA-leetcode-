class Solution {
public:
    int maxFreqSum(string s) {
    unordered_set<char> vowels{'a', 'e', 'i', 'o', 'u'};
        unordered_map<char,int> mp;
        unordered_map<char,int> mpp;
        int maxi = 0;
        int maxi1 = 0;
        for (int i = 0; i < s.size(); i++) {
            if (vowels.count(s[i])) {
                mp[s[i]]++;
            } else {
                mpp[s[i]]++;
            }
        }
        for (auto& it : mp) {
            maxi = max(maxi, it.second);
        }
        for (auto& it1 : mpp) {
            maxi1 = max(maxi1, it1.second);
        }
        return maxi+maxi1;
    }
};