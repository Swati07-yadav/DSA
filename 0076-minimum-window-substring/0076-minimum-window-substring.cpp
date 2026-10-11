class Solution {
public:
    string minWindow(string s, string t) {
        int m = s.length();
        int n = t.length();
        unordered_map<char,int> mp;
        for(int i=0;i<n;i++){
            mp[t[i]]++;
        }
        int l=0, r=0, minlen=INT_MAX, startIdx = -1 ,count = 0;
        while(r<m){
            if(mp[s[r]]>0){
                count++;
            }
            mp[s[r]]--;
            while(count == n){
                if((r-l+1) < minlen){
                    minlen = r-l+1;
                    startIdx = l;
                }
                mp[s[l]]++;
                if(mp[s[l]]>0) count--;
                l++;
            }
            r++;
        }
        return minlen == INT_MAX ? "" : s.substr(startIdx,minlen);
    }
};