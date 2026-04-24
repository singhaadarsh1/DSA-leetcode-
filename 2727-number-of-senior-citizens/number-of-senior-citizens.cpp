class Solution {
public:
    int countSeniors(vector<string>& details) {
        // int n = details.size();
        int i = 0;
        // string word;
        int count = 0;

        for (string l : details) {

            string s = "";
            for (int i = 0; i < l.size(); i++) {
                if (l[i] == 'M' && i + 2 < l.size() && isdigit(l[i + 1]) &&
                    isdigit(l[i + 2])) {
                    s += l[i + 1];
                    s += l[i + 2];
                    int x = stoi(s);
                    if (x > 60) {
                        count++;
                    }
                    s.clear();
                } else if (l[i] == 'F' && i + 2 < l.size() &&
                           isdigit(l[i + 1]) && isdigit(l[i + 2])) {
                    s += l[i + 1];
                    s += l[i + 2];
                    int x = stoi(s);
                    if (x > 60) {
                        count++;
                    }
                    s.clear();
                } else if (l[i] == 'O' && i + 2 < l.size() &&
                           isdigit(l[i + 1]) && isdigit(l[i + 2])) {
                    s += l[i + 1];
                    s += l[i + 2];
                    int x = stoi(s);
                    if (x > 60) {
                        count++;
                    }
                    s.clear();
                }
            }
        }
        return count;
    }
};