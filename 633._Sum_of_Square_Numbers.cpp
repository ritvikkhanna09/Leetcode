class Solution {
public:
    bool judgeSquareSum(int c) {
        for(int i=0;i<=sqrt(c);i++){
            int rem=sqrt(c-(i*i));
            if(rem*rem==c-(i*i))
                return true;
            }
        return false;
    }
};