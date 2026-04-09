class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        unordered_map<char, int> freq;
        unordered_map<char, int> freq1;
        for (char num : jewels) {
            freq[num]++;
        }
        for (char num : stones) {
            freq1[num]++;
        }
        int count=0;
        for(auto &it:freq){
            for(auto &itt:freq1){
                if(it.first==itt.first){
                    count+=itt.second;
                }
            }
        }
        return count;
    }
};