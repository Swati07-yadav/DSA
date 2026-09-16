class Solution {
public:
    // int LCS(string& x,string& y, int m,int n,vector<vector<int>>& dp){
    //     if(m==0 || n==0) return 0;
    //     if(dp[m][n] != -1) return dp[m][n];
    //     if(x[m-1] == y[n-1]){
    //         return dp[m][n] = 1 + LCS(x,y,m-1,n-1,dp);
    //     }
    //     else{
    //         return dp[m][n] = max(LCS(x,y,m-1,n,dp),LCS(x,y,m,n-1,dp));
    //     }
    // }
    int longestCommonSubsequence(string text1, string text2) {
        int m = text1.size();
        int n = text2.size();
        vector<vector<int>> t(m+1,vector<int>(n+1));
        for(int i=0;i<m+1;i++){
            for(int j=0;j<n+1;j++){
                if(i==0 || j==0){
                    t[i][j] = 0;
                }
            }
        }
        for(int i=1;i<m+1;i++){
            for(int j=1;j<n+1;j++){
                if(text1[i-1] == text2[j-1]){
                    t[i][j] = 1 + t[i-1][j-1];
                }else{
                    t[i][j] = max(t[i-1][j],t[i][j-1]);
                }
            }
        }
        return t[m][n];
    }
};