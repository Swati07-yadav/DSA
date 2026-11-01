class Solution {
public:
    int countd(int x){
        int count=0;
        int num = x;
        while(num>0){
            int d = num % 10;
            count++;
            num/=10;
        }
        return count;
    }
    int minMergedInteger(vector<int>& nums) {
        int n = nums.size();
        long long mini = LLONG_MAX;
        long long res;
        for(int i=0;i<n-1;i+=2){
            long long x = nums[i+1];
            res = nums[i] * pow(10,countd(x)) + x;
            mini = min(mini,res);
        }
        return mini;
    }
};