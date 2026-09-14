class Solution {
public:
    int findTargetSumWays(vector<int>& nums, int target) {
        int n = nums.size();
        int sum = 0;
        for(int i=0;i<n;i++){
            sum += nums[i];
        }
        if(sum < abs(target)) return 0;
        if((sum + target)%2 != 0) return 0;
        int requiredSum = (sum + target) / 2;
        vector<int> dp(requiredSum+1,0);
        dp[0]=1;
        for(int num : nums){
            for(int j=requiredSum; j>=num; j--){
                dp[j] = dp[j] + dp[j-num];
            }
        }
        return dp[requiredSum];
    }
};