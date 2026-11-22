class Solution {
public:
    vector<string> assignUmbrella(vector<int>& rain) {
        int n = rain.size();
        vector<string> ans(n,"0");
        int a = 0,b = 0;
        for(int i=0;i<n-1;i++){
            if(rain[i] == rain[i+1] && rain[i]==1){
                if(a<=b){
                    ans[i] = "Alice";
                    a++;
                }else if(a > b){
                    ans[i] = "Bob";
                    b++;
                    }
                }
                else if(rain[i] != rain[i+1] && rain[i]==1){
                    ans[i] = "Bob";
                    b++;
                }else{
                    ans[i] = "None";
                }
            }
            if(rain[n-1]==1) ans[n-1]="Bob";
            else ans[n-1] = "None";
            return ans;
    }
};