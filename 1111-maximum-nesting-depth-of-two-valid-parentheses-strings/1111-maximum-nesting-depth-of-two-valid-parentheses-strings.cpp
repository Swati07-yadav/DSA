class Solution {
public:
    vector<int> maxDepthAfterSplit(string seq) {
        int n = seq.size();
        int depth = 0;
        vector<int> ans;
        for(int i=0;i<n;i++){
            char ch = seq[i];
            if(ch == '('){
                depth += 1;
                ans.push_back(depth%2);
            }
            else if(ch == ')'){
                ans.push_back(depth%2);
                depth -= 1;
            }
        }
        return ans;
    }
};