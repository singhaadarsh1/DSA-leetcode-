class Solution {
public:
    string fnc(string& s, int k) {
        if(s.size()==k){
            return s;
        }else if(s.size()<k){
            return s;
        }
        string m = "";
        int i = 0;
        int sum = 0;
        while (i < s.size()) {

            for (int j = i; j < i + k && j < s.size(); j++) {
                sum += (s[j] - '0');
            }

            m += to_string(sum);
            i += k;

            sum = 0;
        }

        return m;
    }
    string digitSum(string s, int k) {
        string m = fnc(s, k);

        if (m.size() > k) {
            return digitSum(m, k);
        }

        return m;
    }
};