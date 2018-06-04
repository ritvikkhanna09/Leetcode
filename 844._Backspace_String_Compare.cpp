class Solution {
public:
    bool backspaceCompare(string S, string T) {
        string s="";
        string t="";
        for(int i=0;i<S.size();i++){
            if(S[i]=='#' && !s.empty()){
                    s.erase(s.size()-1);
            }
            else if(S[i]!='#')
                s+=S[i];
        }
        for(int i=0;i<T.size();i++){
            if(T[i]=='#'&& !t.empty()){
                    t.erase(t.size()-1);
            }
            else if(T[i]!='#')
                t+=T[i];
        }
        //cout<<s<<t;
        return s==t?true:false;
    }
};