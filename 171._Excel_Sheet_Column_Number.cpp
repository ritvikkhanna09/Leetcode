class Solution {
public:
    int titleToNumber(string s) {
        int n=s.size();
        int col=0;
        for(int i=0;i<n-1;i++){
            col+=(s[i]-64)*pow(26,n-i-1);
        }
        int last=s[n-1]-64;
        cout<<col<<" "<<last;
        return col+last;
    }
};