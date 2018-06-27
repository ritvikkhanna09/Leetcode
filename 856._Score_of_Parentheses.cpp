class Solution {
public:
    int scoreOfParentheses(string S) {
        int result=0;
        int bal=0;
        for(int i=0;i<S.size();i++){
            if(S[i]=='('){
                bal++;
            }else{
                bal--;
                if(S[i-1]=='(')
                    result+=1<<bal;
            }
        }
        return result;   
    }
};