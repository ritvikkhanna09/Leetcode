class Solution {
public:
    bool hasAlternatingBits(int n) {
        int lastbit=n&1;
        while(lastbit==(n&1)){
            lastbit=1-lastbit;
            n=n>>1;
        }
        return n==0?true:false;
    }
};