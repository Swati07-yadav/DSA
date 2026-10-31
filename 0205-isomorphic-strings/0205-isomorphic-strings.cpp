class Solution {
public:
    bool isIsomorphic(string s, string t) {
        int n = s.length();
        vector<int> sTot(256,-1);
        vector<int> tTos(256,-1);
        for(int i=0;i<n;i++){
            char a = s[i];
            char b = t[i];
            if(sTot[a] == -1 && tTos[b] == -1){
                sTot[a]=b;
                tTos[b]=a;
            }
            else if(sTot[a] !=b || tTos[b] != a){
                return false;
            }
        }
        return true;
    }
};