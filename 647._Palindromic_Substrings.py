class Solution:
    def countSubstrings(self, s):
        flag=0
        for i in range(len(s)):
            for j in range(i,len(s)):
                if s[i:j+1]==s[i:j+1][::-1]:
                    flag+=1
        return flag
                


"""C++ sol
class Solution {
public:
    bool isPalin(string s){
        for(int k=0;k<s.length();k++){
            if(s[k]!=s[s.length()-1-k]){
                return false;
            }
        }
        return true;
    }
    
    int countSubstrings(string s) {
        int flag=0;
        for(int i=0;i<s.length();i++){
            for(int j=i;j<s.length();j++){
                if( isPalin(s.substr(i,j+1-i))){
                   flag+=1;
                }
            }
        }
        return flag;
    }
};


"""