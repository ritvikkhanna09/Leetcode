class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<int> frequency(256,0);
        for(int i=0;i<s.size();i++){
            frequency[s[i]]++;
        }
        for(int i=0;i<t.size();i++){
            frequency[t[i]]--;
        }
        for(int i=0;i<frequency.size();i++){
            if(frequency[i]!=0){
                return false;
            }
        }
        return true;
    }
};