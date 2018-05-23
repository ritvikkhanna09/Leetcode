class Solution {
public:
    int sumofproducts(int n){
        int sum=0;
        while(n>0){
            int r=n%10;
            sum+=r*r;
            n/=10;
        }
        return sum;
    }
    
    bool isHappy(int n) {
        vector<int> allproducts;
        while(true){
            int temp=sumofproducts(n);
            if(temp==1)
                return true;
            if(find(allproducts.begin(),allproducts.end(),temp)!=allproducts.end()){
                return false;
            }
            allproducts.push_back(temp);
            n=temp;
        }
    }
};