class Solution {
public:
    int findday(string date, vector<int> &days) {
        int month = stoi(date.substr(0, 2));
        int day = stoi(date.substr(3));
       return (month == 1 ? 0 : days[month - 2]) + day;
    }
    int countDaysTogether(string arriveAlice, string leaveAlice,
                          string arriveBob, string leaveBob) {
        vector<int> monthdays = {31, 28, 31, 30, 31, 30,
                                 31, 31, 30, 31, 30, 31};
        vector<int> cummulativedays(12, 0);
        cummulativedays[0] = 31;
        for (int i = 1; i < cummulativedays.size(); i++) {
            cummulativedays[i] = cummulativedays[i - 1] + monthdays[i];
        }
        int arriveAliceDay = findday(arriveAlice, cummulativedays);
        int arriveBobDay = findday(arriveBob, cummulativedays);
        int leaveAliceDay = findday(leaveAlice, cummulativedays);
        int leaveBobDay = findday(leaveBob, cummulativedays);
        int overlapdays = min(leaveAliceDay, leaveBobDay) -
                          max(arriveAliceDay, arriveBobDay) + 1;
        return overlapdays < 0 ? 0 : overlapdays;
    }
};