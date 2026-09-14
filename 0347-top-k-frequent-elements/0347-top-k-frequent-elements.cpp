class Solution {
public:
    typedef pair<int,int> P;
    vector<int> topKFrequent(vector<int>& nums, int k) {
        int n = nums.size();
        unordered_map<int,int> mp;
        for(int i=0; i<n; i++){
            mp[nums[i]]++;
        }
        priority_queue<P,vector<P>,greater<P>> pq; // min heap
        for(auto it  : mp){
            int value = it.first;
            int freq = it.second;
            pq.push({freq,value});
            if(pq.size() > k){
                pq.pop();
            }
        }
        vector<int> result;
        while(!pq.empty()){
            result.push_back(pq.top().second);
            pq.pop();
        }
        return result;
    }
};