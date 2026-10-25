class Solution {
public:
    long long maximizeSum(vector<int>& nums, int k) {
        long long sum = 0;
        int n = nums.size();
        vector<int> gain;
        for(int num : nums){
            sum += num;
            string s = to_string(num);
            sort(s.begin(),s.end(),greater<char>());
            int largest = stoi(s);
            gain.push_back(largest-num);
        }
        sort(gain.rbegin(),gain.rend());
        for(int i=0;i<k && i< gain.size();i++){
            sum+=gain[i];
        }
        return sum;
    }
};