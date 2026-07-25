class Solution {
public:
    int maxProduct(int n) {
        vector<int>arr;
        int digit;
        while(n>0){
            digit=n%10;
            arr.push_back(digit);
            n=n/10;
        }
        int m=arr.size();
        sort(arr.begin(),arr.end());
        return arr[m-1]*arr[m-2];
         
        
    }
};