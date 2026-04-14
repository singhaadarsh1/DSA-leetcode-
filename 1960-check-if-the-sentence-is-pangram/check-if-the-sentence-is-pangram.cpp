class Solution {
public:
    bool checkIfPangram(string sentence) {
        unordered_set<int> letter;
        for (int i = 0; i < sentence.size(); i++) {
            letter.insert(sentence[i]);
        }
        if(letter.size()==26){
            return true;
        }
        return false;
    }
};