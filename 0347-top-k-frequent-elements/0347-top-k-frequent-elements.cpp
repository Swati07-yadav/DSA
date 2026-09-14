class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        int n = nums.size();
        unordered_map<int,int> mp;
        for(int i=0; i<n; i++){
            mp[nums[i]]++;
        }
        vector<int> ans;
        for(auto& [num,freq] : mp){
            ans.push_back(num);
        }
        sort(ans.begin(),ans.end(),[&](int a, int b){
            return mp[a]>mp[b];
        });
        return vector<int>(ans.begin(),ans.begin()+k);
    }
};