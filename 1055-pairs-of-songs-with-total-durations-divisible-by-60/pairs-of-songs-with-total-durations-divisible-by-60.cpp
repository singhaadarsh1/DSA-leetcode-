class Solution {
public:
    int numPairsDivisibleBy60(vector<int>& time) {
      //brute force o(n^2)
        /*int count = 0;
        for (int i = 0; i < time.size() - 1; i++) {
            for (int j = i + 1; j < time.size(); j++) {
                if ((time[i] + time[j]) % 60 == 0) {
                    count++;
                }
            }
        }
        return count;*/
        vector<int>freq(60,0);
        int count=0;
        for(int i=0;i<time.size();i++){
            int rem=time[i]%60;
            int complement=(60-rem)%60;
            count+=freq[complement];
            freq[rem]++;
        }
        return count;
    }
};