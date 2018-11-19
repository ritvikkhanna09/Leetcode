class Solution {
public:
    bool validMountainArray(vector<int>& a) {
        int n=a.size();
        if(n<3) return false;
        vector<bool> left(n),right(n);
        left[0]=true;
        for(int i=1;i<n;i++){
            left[i]=left[i-1]&&(a[i]>a[i-1]);
        }
        right[n-1]=true;
        for(int i=n-2;i>=0;--i){
            right[i]=right[i+1]&&(a[i]>a[i+1]);
        }
        for(int i=1;i<n-1;++i){
            if(left[i]&&right[i]) return true;
        }
        return false;
    }
};