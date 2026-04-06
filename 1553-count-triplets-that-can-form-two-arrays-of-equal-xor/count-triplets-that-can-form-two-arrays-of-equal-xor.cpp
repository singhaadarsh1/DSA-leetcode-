class Solution {
public:
    int countTriplets(vector<int>& arr) {
        /*int n = arr.size();//brute force
         int count = 0;

         for(int i = 0; i < n; i++){
             for(int j = i + 1; j < n; j++){
                 for(int k = j; k < n; k++){

                     int a = 0;
                     for(int x = i; x < j; x++){
                         a ^= arr[x];
                     }

                     int b = 0;
                     for(int x = j; x <= k; x++){
                         b ^= arr[x];
                     }

                     if(a == b){
                         count++;
                     }
                 }
             }
         }
         return count;*/
        int n = arr.size();
        
        int count = 0;
        for (int i = 0; i < n; i++) {
            int xorr = 0;
            for (int k = i; k < n; k++) {
                xorr ^= arr[k];
                if (xorr == 0) {
                    count += (k - i);
                }
            }
        }
        return count;
    }
};