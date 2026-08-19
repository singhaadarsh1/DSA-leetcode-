class Solution {
public:
    int firstUniqChar(string s) {
      /*  for (int i = 0; i < s.size(); i++) {

            // First occurrence must be i
            if (s.find(s[i]) != i)
               continue;

            // No occurrence after i
            if (s.find(s[i], i + 1) == string::npos)
                return i;
        }

        return -1;*/
        //optimized approach
        int freq[26] = {0};

        // Step 1: Count every character
        for (char c : s) {
            freq[c - 'a']++;
        }

        // Step 2: Find the first character whose frequency is 1
        for (int i = 0; i < s.size(); i++) {
            if (freq[s[i] - 'a'] == 1) {
                return i;
            }
        }

        return -1;
    }
};