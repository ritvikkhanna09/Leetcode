class Solution {
public:
    int hammingDistance(int x, int y) {
        int xr=0,yr=0;
        int count=0;
        while(x!=0 || y!=0){
            if(x!=0){
                xr=x%2;
                x/=2;
            }
            else
                xr=0;
            if(y!=0){
                yr=y%2;
                y/=2;
            }
            else
                yr=0;
            if(xr!=yr)
                count++;
        }
        return count;
    }
};
