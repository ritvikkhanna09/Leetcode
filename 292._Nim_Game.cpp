class Solution {
public:
    bool canWinNim(int n) {
        bool result;
        if(n%4==0)
            result=false;
        else
            result=true;
        return result;
    }
};