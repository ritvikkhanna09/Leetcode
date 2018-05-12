class Solution {
public:
    int findComplement(int num){
        int op = 0;
        string numStr;
        while(num>0)
        {
            numStr+=(num%2==0?'1':'0');
            num/=2;
        }
        
        for(int i=0; i<numStr.size();i++){
            // cout<<(numStr[i]);
            op+= ((numStr[i]-'0') * pow(2,i));
        }
        
        return op;
}
};