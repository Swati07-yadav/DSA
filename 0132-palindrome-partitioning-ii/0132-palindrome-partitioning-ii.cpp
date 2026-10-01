class Solution {
public:
    int minCut(string s) {
        int n = s.size();
        vector<vector<bool>> pal(n,vector<bool>(n,false));
        for(int i=0;i<n;i++){
            pal[i][i] = true;
        }
        // length >= 2
        for(int L=2; L<=n; L++){
            for(int i=0; i<n-L+1; i++){
                int j = i+L-1;
                if(L==2){
                    pal[i][j] = (s[i]==s[j]);
                }else{
                    pal[i][j] = ((s[i]==s[j]) && pal[i+1][j-1]);
                }
            }
        }
        vector<int> dp(n);
        for(int i=0;i<n;i++){
            if(pal[0][i]==true){
                dp[i]=0;
            }else{
                dp[i]=INT_MAX;
                for(int k=0;k<i;k++){
                    if(pal[k+1][i]==true && 1+dp[k]<dp[i]){
                        dp[i] = 1 + dp[k];
                    }
                }
            }
        }
        return dp[n-1];
    }
};