class Solution {
public:
    string getPermutation(int n, int k) {
        string a,s="";
        int i=1;
        while(n--){
            stringstream ss;
            ss<<i;
            ss>>a;
            s+=a;
            i++;
        }
        i=1;
        while(i<k){
            next_permutation(s.begin(),s.end());
            i++;
        }
        return s;
    }
};