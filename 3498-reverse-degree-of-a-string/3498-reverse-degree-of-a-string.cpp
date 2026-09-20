class Solution {
public:
    int reverseDegree(string s) {
        int n = s.length();
        int cnt=0;
        for(int i=0;i<n;i++){
            int num = s[i];
            num = abs(num-122);
            cnt += (num+1) * (i+1);
        }
        return cnt;
    }
};