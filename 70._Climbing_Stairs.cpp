class Solution {
public:
    int climbStairs(int n) {
        if(n==1) return 1;
        if(n==2) return 2;
        if(n==3) return 3;
        int a=2;
        int b=3;
        int temp;
        for(int i=3;i<n;i++){
            temp=a+b;
            a=b;
            b=temp;
        }
        return temp;
    }
};