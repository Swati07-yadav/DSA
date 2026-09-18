class Solution {
public:
    long long calculate(vector<int>& piles,int h){
        int n = piles.size();
        long long total=0;
        for(int i=0;i<n;i++){
            total += ceil((double)piles[i]/h);
        }
        return total;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int low = 1;
        int high = *max_element(piles.begin(),piles.end());
        while(low<=high){
            int mid = (low+high)/2;
            long long totalhrs = calculate(piles,mid);
            if(totalhrs <= h){
                high=mid-1;
            }else{
                low=mid+1;
            }
        }
        return low;
    }
};