class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        string temp=s+s;
        temp=temp.substr(1,s.size()*2-2);
        if(temp.find(s)!=-1)
            return true;
        else
            return false;
    }
};