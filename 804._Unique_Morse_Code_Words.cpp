class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        int count=0;
        string arr[26]={".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
        unordered_set<string> s;
        for(int i=0;i<words.size();i++){
            string temp="";
            for(int j=0;j<words[i].length();j++){
                temp.append(arr[words[i][j]-'a']);
            }
            s.insert(temp);
        }
        return s.size();
    }
};
