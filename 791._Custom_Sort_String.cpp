class Solution {
public:
    string customSortString(string S, string T) {
        string result="";
        for(int i=0;i<S.size();i++){
            for(int j=0;j<T.size();j++){
                if(S[i]==T[j]){
                    result+=T[j];
                    T[j]='0';
                }
            }
        }
        for(int i=0;i<T.size();i++){
            if(T[i]!='0')
                result+=T[i];
        }
        return result;
    }
};