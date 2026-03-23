class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
        int n = nums1.size();
        int cnteven = 0;
        int cntodd = 0;
        for (auto x : nums1) {
            if (x % 2 == 0) {
                cnteven++;
            } else {
                cntodd++;
            }
        }
        if(cnteven==n||cntodd==n){
            return true;
        }
        int mini=INT_MAX;
        for(auto x :nums1)
        if(x%2==1){
            mini=min(mini,x);
        }
        for(auto x:nums1){
            if(x%2==0&&x-mini<1){
                return false;

            }
        }
        return true;
        
    }
};

Intuition and Approach
Observation 1
If all even or all odd -> return true

Observation 2
If it's mix of even and odd -> We have to make the even elements into odd by subtracting with odd.

So find the minimum value of odd in the array and try to subtract with each even value and check if subtraction is >=1, if it's not return false

If you're thinking in case of even and odd -> Why can't we make all elements as even ?

So to make an odd element even -> We need to subtract it with an odd element(call this mnodd). If we subtract all the odd elements with mnodd, we'll have even elements but mnodd will still remain odd and there's no way to make this even.

Complexity
Time complexity:
O(N)

Space complexity:
O(N)
