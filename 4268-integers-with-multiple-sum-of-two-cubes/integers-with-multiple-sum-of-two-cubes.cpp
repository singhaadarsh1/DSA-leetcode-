class Solution {
public:
    vector<int> findGoodIntegers(int n) {
        unordered_map<long long,int>freq;
       // int maxx=1000;
      //  while((long long)maxx*maxx*maxx>n){
           // maxx--;
       // }
        for(long long a=1;(a*a*a)<=n;a++){
            long long a3=a*a*a;
            for(long long b=a;(b*b*b)<=n;b++){
                long long sum=a3+b*b*b;
                 if(sum>n){
                     break;
                 }
                freq[sum]++;
            }
        }
        vector<int>final;
        for(auto &it:freq){
            if(it.second>=2){
                final.push_back(it.first);
            }
        }
        sort(final.begin(),final.end());
        return final;
        
    }
};