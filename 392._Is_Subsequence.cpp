class Solution {
public:
    bool isSubsequence(string s, string t) {
        int s_pointer=0;
        for(int i=0;i<t.size() && s_pointer!=s.size();i++){
            if(s[s_pointer]==t[i])
                s_pointer++;
        }
        if(s_pointer==s.size())
            return true;
        else
            return false;
    }
};