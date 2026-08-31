class Solution {
public:
    int minBishopMoves(vector<int>& source, vector<int>& target) {
        if((source[0]+source[1])%2!=(target[0]+target[1])%2) return -1;
       
        else{
            int r=source[0]-target[0];
            int c=source[1]-target[1];
            if(abs(r)==abs(c)) return 1;
            else return 2;
        }
        
    }
};