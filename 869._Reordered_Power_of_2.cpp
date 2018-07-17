class Solution {
public:
    bool reorderedPowerOf2(int N) {
        stringstream ss;string str;
        ss<<N;ss>>str;
        int n=str.size();
        bool flag =false;
        sort(str.begin(),str.end());
        do{
            ss.clear();int temp;string xx;
            ss<<str;ss>>temp;
            ss.clear();
            ss<<temp;ss>>xx;
            if( str.size()==xx.size() && !(temp & (temp-1) )){
                flag=true;
                break;
            }
        }while(next_permutation(str.begin(),str.end()));
        return flag;
    }
};