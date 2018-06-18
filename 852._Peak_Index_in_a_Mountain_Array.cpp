class Solution {
public:
    int peakIndexInMountainArray(vector<int>& A) {
        int n=A.size();
        vector<int> left(n,1);
        vector<int> right(n,1);
        for(int i=1;i<left.size();i++){
            if(A[i-1]<A[i])
                left[i]=left[i-1]+1;
        }
        for(int i=right.size()-2;i>=0;--i){
            if(A[i]>A[i+1])
                right[i]=right[i+1]+1;
        }
        for(auto& i:left){
            cout<<i<<" ";
        }
        cout<<endl;
        for(auto& i:right){
            cout<<i<<" ";
        }
        cout<<endl;
        int max_index;
        int max_val=0;
        for(int i=0;i<n;i++){
            if(max_val<left[i]+right[i]){
                max_val=left[i]+right[i];
                max_index=i;
            }
        }
        return max_index;
    }
};