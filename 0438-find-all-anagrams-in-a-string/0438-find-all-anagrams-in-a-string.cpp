class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        int n = s.size();
        int k = p.size();
        vector<int> idx;
        if(k>n) return idx;
        vector<int> freq(26,0);
        for(char ch : p){
            freq[ch-'a']++;
        }
        vector<int> window(26,0);
        for(int i=0;i<k;i++){
            window[s[i]-'a']++;
        }
        if(freq == window){
            idx.push_back(0);
        }
        for(int i=k;i<n;i++){
            window[s[i]-'a']++;
            window[s[i-k]-'a']--;
            if(freq == window){
                idx.push_back(i-k+1);
            }
        }
        return idx;
    }
};