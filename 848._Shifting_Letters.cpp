class Solution {
public:
    string shiftingLetters(string S, vector<int>& shifts) {
        string ans="";
        for(int i=shifts.size()-2;i>=0;i--){
            shifts[i]+=shifts[i+1];
            shifts[i]%=26;
        }
        for(int i=0;i<shifts.size();i++){
            int pre=S[i]-'a';
            pre=(pre+shifts[i])%26;
            ans+='a'+pre;
        }
        
        return ans;
    }
};