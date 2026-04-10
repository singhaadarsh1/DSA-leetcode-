class Solution {
public:
    bool valid(char c) {
        if (c >= '0' && c <= '9') {
            return true;
        }
        return false;
    }
    int myAtoi(string s) {
        int ans = 0;
    int sign = 1;
    int i = 0;
    int n = s.size();

    // 1. skip spaces
    while (i < n && s[i] == ' ') {
        i++;
    }

    // 2. sign
    if (i < n && (s[i] == '+' || s[i] == '-')) {
        if (s[i] == '-') {
            sign = -1;
        }
        i++;
    }

    // 3. digits
    while (i < n && valid(s[i])) {
        int digit = s[i] - '0';

        if (ans > (INT_MAX - digit) / 10) {
            return (sign == 1) ? INT_MAX : INT_MIN;
        }

        ans = ans * 10 + digit;
        i++;
    }

    return ans * sign;
    }
};