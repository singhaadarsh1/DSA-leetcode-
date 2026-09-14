class Solution {
public:
    bool isRectangleOverlap(vector<int>& rec1, vector<int>& rec2) {
        vector<int> xcoordinate;
        vector<int> ycoordinate;
        for (int i = 0; i < rec1.size(); i++) {
            if (i % 2 == 0) {
                xcoordinate.push_back(rec1[i]);
            } else {
                ycoordinate.push_back(rec1[i]);
            }
        }
        for (int i = 0; i < rec2.size(); i++) {
            if (i % 2 == 0) {
                xcoordinate.push_back(rec2[i]);
            } else {
                ycoordinate.push_back(rec2[i]);
            }
        }
        int mini = min(xcoordinate[1], xcoordinate[3]);
        int maxi = max(xcoordinate[0], xcoordinate[2]);
        int overlapwidth = mini-maxi;
        int mini1 = min(ycoordinate[1], ycoordinate[3]);
        int maxi1 = max(ycoordinate[0], ycoordinate[2]);
        int overlapheight = mini1-maxi1;
        if (overlapwidth > 0 && overlapheight > 0) {
            return true;
        }
        return false;
    }
};