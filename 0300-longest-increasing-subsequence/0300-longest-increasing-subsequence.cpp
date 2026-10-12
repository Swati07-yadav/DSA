class Solution {
public:
    int n;
    int dp[2501][2501];
    int solve(int idx, vector<int>& nums,int prev){
        if(idx >= n) return 0;
        if(prev != -1 && dp[idx][prev]!=-1){
            return dp[idx][prev];
        }
        int take = 0;
        if(prev == -1 || nums[idx] > nums[prev]){
            take = 1 + solve(idx+1,nums,idx);
        }
        int skip = solve(idx+1,nums,prev);
        if(prev != -1){
            dp[idx][prev] = max(take,skip);
        }
        return max(take,skip);
    }
    int lengthOfLIS(vector<int>& nums) {
        n = nums.size();
        memset(dp,-1,sizeof(dp));
        return solve(0,nums,-1);
    }
};