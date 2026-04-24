class Solution {
public:
    int furthestDistanceFromOrigin(string moves) {
        int maxi = INT_MIN;
        int count = 0;
        int count1 = 0;
        int dist ;int dist1;
        for (int i = 0; i < moves.size(); i++) {
            if (moves[i] == 'L' || moves[i] == '_') {
                count++;
            } else {
                count1++;
            }
            dist = abs(count-count1);
        }
        int count2= 0;
            int count3 = 0;
        for (int i = 0; i < moves.size(); i++) {
            

            if (moves[i] == 'R' || moves[i] == '_') {
                count2++;
            } else {
                count3++;
            }
            dist1 = abs(count2 - count3);
        }
        return max(maxi, max(dist, dist1));
    }
};