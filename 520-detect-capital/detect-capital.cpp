class Solution {
public:
    bool detectCapitalUse(string word) {
        /* map<char, int> lowermap;
         map<char, int> uppermap;
         map<char, int> mixedmap;
         for (char ch : word) {


             mixedmap[ch]++;

             if (ch >= 'a' && ch <= 'z') {
                 lowermap[ch]++;
             } else if (ch >= 'A' && ch <= 'Z') {
                 uppermap[ch]++;
             }
         }
         int cnt = 0;
         for (auto& it : lowermap) {
             cnt += it.second;
         }
         if (cnt == word.size()) {
             return true;
         }
         int cntt = 0;
         for (auto& it : uppermap) {
             cntt += it.second;
         }
         if (cntt == word.size()) {
             return true;
         }
         if (isupper(word[0])) {
             bool ok = true;

             for (int i = 1; i < word.size(); i++) {
                 if (!islower(word[i])) {
                     ok = false;
                     break;
                 }
             }

             if (ok)
                 return true;
         }

         return false;*/
        int n = word.size() - 1;
        int s = 0;
        int e = n;
        int mid = s + (e - s) / 2;
        bool allupper=true;
        while (s <= e) {
            if(isupper(word[s])&& isupper(word[e])){
                s++;
                e--;
                continue;
            }else {
                allupper=false;
                break;
               
            }
        }
        if(allupper) return true;

        int k = word.size() - 1;
        int st = 0;
        int end = k;
        bool alllower=true;
        while (st <= end) {
            if(islower(word[st])&& islower(word[end])){
                st++;
                end--;
                continue;
            }else {
                alllower=false;
                break;
                
               
            }
            
        }
        if (alllower) return true;

        int m = word.size() - 1;
        int stt = 1;
        int endd = m;
        bool firstupperrestlower=isupper(word[0]);
        while (stt <= endd) {
            if( islower(word[stt])){
                stt++;
                continue;
            }else {
                firstupperrestlower =false;
                break;
                
                
            }
        }
        if(firstupperrestlower) return true;
        return false;
        
    }
};