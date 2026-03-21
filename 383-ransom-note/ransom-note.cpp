class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char, int> mp;
        unordered_map<char, int> mpp;
        for (auto ch : ransomNote) {
            mp[ch]++;
        }
        for (auto ch : magazine) {
            mpp[ch]++;
        }
        for (auto it : mp) {
            char ch = it.first;
            int need = it.second;
            if (mpp[ch] < need) {
                return false;
            }
        }
        return true;
    }
};