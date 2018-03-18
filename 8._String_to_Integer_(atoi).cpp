class Solution {
public:
    int myAtoi(string str) {
        if(str=="")
            return 0;
        stringstream ss(str);
        int integ;
        ss>>integ;
        return integ;
    }
};