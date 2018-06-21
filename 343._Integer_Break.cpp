class Solution {
public:
    int integerBreak(int n) {
        if(n==2||n==3) return n-1;
        int mul=1;
        while(n>4){
            n-=3;
            mul*=3;
        }
        return mul*n;
    }
};