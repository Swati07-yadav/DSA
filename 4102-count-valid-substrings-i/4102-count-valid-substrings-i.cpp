class Solution {
public:
    long long countValidSubstrings(string s) {
        int n = s.size();
        long long count = 0;
        int i=0;
        for(int j=0;j<n;j++){
            if(j>=2 && s[j-2]=='a' && s[j-1] == 'b' && s[j] == 'c'){
                i = max(i,j-1);
            }
            count += (j-i+1);
        }
        return count;
    }
};