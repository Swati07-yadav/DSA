class Solution {
public:
    int reverseDegree(string s) {
        int n = s.length();
        int sum = 0;
        for(int i=0;i<n;i++){
            char ch = s[i];
            int reverse = 26-(ch-'a');
            sum += (i+1)*reverse;
        }
        return sum;
    }
};