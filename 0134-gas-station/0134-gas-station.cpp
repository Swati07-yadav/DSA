class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int n = gas.size();
        int start = 0;
        int totalGas= 0;
        int totalcost = 0;
        int currGas = 0;
        for(int i=0;i<n;i++){
            totalGas += gas[i];
            totalcost += cost[i];
            currGas += gas[i]-cost[i];
            if(currGas < 0){
                start = i+1;
                currGas = 0;
            }
        }
        if(totalGas < totalcost) return -1;
        return start;
    }
};