class Solution {
public:
    int minMergedInteger(vector<int>& nums) {
        int n = nums.size();
        int mini = INT_MAX;
        string ans;
        for(int i=0;i<n;i+=2){
            ans = to_string(nums[i]) + to_string(nums[i+1]);
            mini = min(mini,stoi(ans));
        }
        return mini;
    }
};