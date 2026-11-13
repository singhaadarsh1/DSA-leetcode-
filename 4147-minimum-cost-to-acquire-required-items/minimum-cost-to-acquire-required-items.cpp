class Solution {
public:
    long long minimumCost(int cost1, int cost2, int costBoth, int need1, int need2) {
        long long maxi=max(need1,need2);
        if(need1==0&&need2==0){
            return 0;

        }
        long long totalcost1=1LL*cost1*need1+1LL*cost2*need2;
        long long totalcost2=1LL*costBoth*maxi;
        long long totalcost3=1LL* costBoth*min(need1,need2)+1LL*cost1*(need1-min(need1,need2))+1LL*cost2*(need2-min(need1,need2));
        return min({totalcost1,totalcost2,totalcost3});


        
    }
};