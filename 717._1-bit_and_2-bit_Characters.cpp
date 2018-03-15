class Solution {
public:
    bool isOneBitCharacter(vector<int>& bits) {
        int i=0;
        bool x;
        while(i<bits.size()){
            if(bits[i]==1){
                x=false;
                i+=2;
            }
            else{
                x=true;
                i+=1;
            }
        }
        return x;
    }
};