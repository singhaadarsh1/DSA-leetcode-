class Solution {
public:
    string truncateSentence(string s, int k) {
        string  result;
        stringstream ss(s);
        string token;
        int count =0;
        while (ss >> token && count<k) {
            result += token;
            result+=' ';
            count++;
        }
        result.pop_back();
        return result;
    }
};