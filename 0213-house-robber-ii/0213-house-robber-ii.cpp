class Solution {
public:
    int solve(int idx,int end, vector<int>& nums,vector<int>& dp){
        if(idx >= end) return 0;
        if(dp[idx] != -1) return dp[idx];
        int pick = nums[idx] + solve(idx+2,end,nums,dp);
        int not_pick = solve(idx+1,end,nums,dp);
        return dp[idx] = max(pick,not_pick);
    }
    int rob(vector<int>& nums) {
        int n = nums.size();
        if(n==1) return nums[0];
        vector<int> dp1(n,-1);
        int case1 = solve(0,n-1,nums,dp1);
        vector<int> dp2(n,-1);
        int case2 = solve(1,n,nums,dp2);
        return max(case1,case2);
    }
};