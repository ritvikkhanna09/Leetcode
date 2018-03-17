class Solution {
public:
    bool check(int n){
        for(int i=n;i>0;i/=10){
            if(!(i%10) || n % (i % 10))
                return false;
        }
        return true;
        
    }
    
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> result;
        for(int i=left;i<=right;i++){
            if(check(i)){
                result.push_back(i);
            }
        }
        return result;
    }

};