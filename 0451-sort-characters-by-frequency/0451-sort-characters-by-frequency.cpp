class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char,int> mp;
        for(char ch : s){
            mp[ch]++;
        }
        priority_queue<pair<int,char>> pq;  // max heap
        for(auto it : mp){
            pq.push({it.second,it.first});
        }
        string ans = "";
        while(!pq.empty()){
            int freq = pq.top().first;
            char ch = pq.top().second;
            pq.pop();
            ans += string(freq,ch);
        }
        return ans;
    }
};