class Solution {
public:
    int matchPlayersAndTrainers(vector<int>& players, vector<int>& trainers) {
        sort(players.begin(),players.end());
        sort(trainers.begin(),trainers.end());
        
        int j=0;
        int i=0;
        while(i<trainers.size()&&j<players.size()){
            if(trainers[i]>=players[j]){
                j++;
               
            }
             i++;
        }
        return j;

        
    }
};