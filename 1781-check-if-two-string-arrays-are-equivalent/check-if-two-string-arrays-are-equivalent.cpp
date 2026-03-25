class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        string  s = "";
        string  s1 = "";
        for (string w : word1) {
            s += w;
        }
        for (string w : word2) {
            s1 += w;
        }
        if(s!=s1){
            return false;
        }else{
           return true ;
        }
        return 0;
    }
};