class Solution {
public:
    int maxDepth(string s) {
        int n = s.length();
        int maxcount = INT_MIN;
        int count = 0;
        for(int i=0;i<n;i++){
            if(s[i]=='(') count++;
            else if(s[i]==')') count--;
            maxcount = max(maxcount,count);
        }
        return maxcount;
    }
};