class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char, int> magaHash;

        for (char c : magazine) {
            magaHash[c]++;
        }

        for (char c : ransomNote) {
            if (magaHash[c] <= 0) {
                return false;
            }
            magaHash[c]--;
        }

        return true;
    }
};
#markdown 
tc-O(m+n)
m: the length of magazine.
n: the length of ransomNote.
sc-Space complexity: O(26) → O(1)
-approach->use hashmap  for Counting each character.
