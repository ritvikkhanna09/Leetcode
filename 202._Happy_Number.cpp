class Solution {
public:
    int util(int n){
        int sum=0;
        while(n){
            int r=n%10;
            sum+=(r*r);
            n/=10;
        }
        return sum;
    }
    bool isHappy(int n) {
        vector<int> arr;
        while(true){
            int temp=util(n);
            if(temp==1) return true;
            if(find(arr.begin(),arr.end(),temp)!=arr.end()) return false;
            arr.push_back(temp);
            n=temp;
        }
        return false;
    }
};
