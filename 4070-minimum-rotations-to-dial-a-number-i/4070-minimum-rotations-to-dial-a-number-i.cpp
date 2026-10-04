class Solution {
public:
    int minRotations(string s) {
        int n = s.size();
        int curr = 0;
        int ans = 0;
        for(int i=0;i<s.length();i++){
            int digit = s[i]-'0';
            int diff = abs(digit-curr);
            ans += min(diff,10-diff);
            curr = digit;
        }
        return ans;
    }
};