class Solution {
public:
    string convert2binary(int s) {
        string res = "";
        while (s > 0) {
            if (s % 2 == 0) {
                res += '0';
            } else {
                res += '1';
            }
            s /= 2;
        }
        reverse(res.begin(), res.end());
        return res;
    }
    string convertDateToBinary(string date) {
        vector<string> part;
        string temp = "";
        for (char c : date) {
            if (c == '-') {
                part.push_back(temp);
                temp="";
            } else {
                temp += c;
            }
           
        }
         part.push_back(temp);
        string ans = "";
        vector<int>nums;
        for(string s: part){
            nums.push_back(stoi(s));
        }
        for (int s : nums) {
           
            ans+=convert2binary(s);
            ans.push_back('-');
        }
        ans.pop_back();
        return ans;
    }
};