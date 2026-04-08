class Solution {
public:
    bool valid(char c) {
        if ((c >= 'a' && c <= 'z') || (c >= '0' && c <= '9') ||
            (c >= 'A' && c <= 'Z')) {
            return true;
        }
        return false;
    }
    char tolowercase(char c) {
        if ((c >= 'a' && c <= 'z') || (c >= '0' && c <= '9'))
            return c;
        else {
            char temp = c - 'A' + 'a';
            return temp;
        }
    }
   /* bool ispali(string &temp, int l, int r) {
        if (l >= r) {
            return true;
        } else if (temp[l] != temp[r]) {
            return false;
        } else
            return ispali(temp, l + 1, r - 1);
        
    }*/
    bool ispali(int i,int n,string&temp){
        if(i>=n/2){
            return true;
        }
        else if(temp[i]!=temp[n-i-1]){
            return false;
        }
        return ispali(i+1,n,temp);
        
    }
    bool isPalindrome(string s) {
        string temp = "";
        for (int i = 0; i < s.size(); i++) {
            if (valid(s[i])) {
                temp.push_back(tolowercase(s[i]));
            }
        }
        int n = temp.size();
       // return ispali(temp, 0, n - 1);
       return ispali(0,n,temp);
    }
};