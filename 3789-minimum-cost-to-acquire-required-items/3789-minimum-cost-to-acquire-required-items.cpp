class Solution {
public:
    long long minimumCost(int cost1, int cost2, int costBoth, int need1, int need2) {
        if(need1 == 0 && need2 == 0) return 0;
        long long ans;
        long long a = min(cost1 + cost2, costBoth);
        long long b = min(need1, need2);
        if(need1 > need2){
            long long rem1 = need1-need2;
            long long c = min(cost1,costBoth);
            ans = a*b + rem1 * c;
        }
        else if(need2 > need1){
            long long rem2 = need2-need1;
            long long c = min(cost2,costBoth);
            ans = a*b + rem2 * c;
        }
        else{
            ans = a*b;
        }
        return ans;
    }
};