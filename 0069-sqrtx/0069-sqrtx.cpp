class Solution {
public:
    int mySqrt(int x) {
        int low = 0, high = x;
        while(low<=high){
            long long mid = low + (high-low)/2;
            long long s = mid*mid;
            if(s==x) return mid;
            else if(s>x) high = mid - 1;
            else low = mid+1;
        }
        return high;
    }
};