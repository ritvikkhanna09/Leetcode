class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if(strs.empty())
            return "";
        string answer=strs[0];
        for(int i=1;i<strs.size();i++){
            int j=0;
            while(true){
                if(answer[j]==strs[i][j])
                    j++;
                else
                    break;
            }
            answer=answer.substr(0,j);
        }
        return answer;
    }
};