class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        int n = stones.size();
        priority_queue<int> pq;   // max heap
        for(int x : stones){
            pq.push(x);
        }
        while(pq.size() > 1){
            int y = pq.top();
            pq.pop();
            int x = pq.top();
            pq.pop();
            if(x != y) pq.push(y-x);
        }
        if(pq.size() == 1) return pq.top();
        return 0;
    }
};