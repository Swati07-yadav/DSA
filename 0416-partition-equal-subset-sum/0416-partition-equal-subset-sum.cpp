class Solution {
public:
    bool canPartition(vector<int>& nums) {
        int n = nums.size();
        int sum=0;
        for(int i=0;i<n;i++){
            sum+=nums[i];
        }
        if(sum % 2 != 0) return false;
        int target = sum/2;
        vector<vector<int>> t(n+1,vector<int>(target+1,false));
        for(int i=0;i<=n;i++){
            t[i][0] = true;
        }
        for(int i=1;i<=n;i++){
            for(int j=1;j<=target;j++){
                if(nums[i-1] <= j){
                    t[i][j] = t[i-1][j-nums[i-1]] || t[i-1][j];
                }else{
                    t[i][j] = t[i-1][j];
                }
            }
        }
        return t[n][target];
    }
};