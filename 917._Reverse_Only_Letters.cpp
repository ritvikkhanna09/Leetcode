class Solution {
public:
    string reverseOnlyLetters(string S) {
        int front=0;
        int rear=S.size()-1;
        while(front<rear){
            if(!isalpha(S[front]))
                front++;
            if(!isalpha(S[rear]))
                rear--;
            if(isalpha(S[front])&&isalpha(S[rear])){
                swap(S[front],S[rear]);
                front++;rear--;
            }
        }
        return S;
    }
};