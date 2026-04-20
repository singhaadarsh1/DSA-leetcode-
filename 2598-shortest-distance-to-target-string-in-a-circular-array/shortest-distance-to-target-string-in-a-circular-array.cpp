class Solution {
public:
    int closestTarget(vector<string>& words, string target, int startIndex) {
        int j = startIndex;
        int n = words.size();
        int mini = INT_MAX;
        int count = 0;
        do {
            if (words[j] == target) {
                mini = min(mini, count);
            }
            count++;
            j = (j + 1) % n;
        } while (j != startIndex);
        int count1 = 0;
        int j1 = startIndex;
        do {

            if (words[j1] == target) {
                mini = min(mini, count1);
            }
            count1++;
            j1 = (j1 - 1 + n) % n;
        } while (j1 != startIndex);

        return mini == INT_MAX ? -1 : mini;
    }
};