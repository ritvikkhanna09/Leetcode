class Solution {
public:
    int binaryGap(int N) {
        int max_val=-1;
        bool flag=false;
        int count=0;
        while(N){
            if(N & 1){
                max_val=max(count,max_val);
                flag=true;
                count=1;
            }
            else if(flag==true && !(N&1)){
                count++;
            }
            N=N>>1;
        }
        return max_val;
    }
};