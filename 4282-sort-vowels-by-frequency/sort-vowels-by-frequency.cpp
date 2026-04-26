class Solution {
public:
    string sortVowels(string s) {
        int n = s.size();
        unordered_map<char, int> freq;
        unordered_map<char, int> findex;
        for (int i = 0; i < n; i++) {
            if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' ||
                s[i] == 'u') {
                freq[s[i]]++;// store vowels and its frequency
                if (findex.find(s[i]) == findex.end()) {
                    findex[s[i]] = i;// store the first index of each vowels
                }
            }
        }
        vector<int> vowels;//store vowels 
        for (auto& it : freq) {
            vowels.push_back(it.first);
        }
        sort(vowels.begin(), vowels.end(), [&](char a, char b) {// sort vowels according to frequency and index condition given in question
            if (freq[a] != freq[b]) {
                return freq[a] > freq[b];
            } else {
                return findex[a] < findex[b];
            }
        });
        vector<int> sequence;// store the sequence in which the vowels will be stored in final result
        for (char c : vowels) {
            for (int i = 0; i < freq[c]; i++) {
                sequence.push_back(c);
            }
        }
        string  result;
        int idx = 0;
        for (int i = 0; i < n; i++) {
            if (s[i] != 'a' && s[i] != 'e' && s[i] != 'i'&& s[i] != 'o' &&
                s[i] != 'u') {
                result.push_back(s[i]);//store consonant
            } else {

                result.push_back(sequence[idx]);//store vowels acccording to sequence 
                idx++;
            }
        }
      
        return result;
    }
};