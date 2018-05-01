class Solution {
public:
    string toGoatLatin(string S) {
        istringstream in(S);
        string ans, word, app = "ma", table = "AEIOUaeiou";
        while (in >> word) 
        {
            app += 'a';
            
            if (table.find_first_of(word[0]) != -1) 
                ans += word + app + ' ';
            else 
                ans += (word.size() == 1 ? word : word.substr(1, word.size() - 1) + word[0]) + app + ' ';
        }
        ans.pop_back();
        return ans;
    }
};