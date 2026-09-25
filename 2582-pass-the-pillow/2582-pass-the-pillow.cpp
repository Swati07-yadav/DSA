class Solution {
public:
    int passThePillow(int n, int time) {
        int direction=1;
        int pos=1;
        while(time--){
            pos+=direction;
            if(pos==n || pos==1){
                direction *= -1;
            }
        }
        return pos;
    }
};