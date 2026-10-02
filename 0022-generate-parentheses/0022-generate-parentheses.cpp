class Solution {
public:
    void solve(string curr,int n,int open,int close,vector<string> &result){
        if(curr.length() == n*2){
            result.push_back(curr);
            return;
        }
        if(open<n){
            curr.push_back('(');
            solve(curr,n,open+1,close,result);
            curr.pop_back();
        }
        if(close<open){
            curr.push_back(')');
            solve(curr,n,open,close+1,result);
            curr.pop_back();
        }
    }
    vector<string> generateParenthesis(int n) {
        vector<string> result;
        string curr="";
        solve(curr,n,0,0,result);
        return result;
    }
};