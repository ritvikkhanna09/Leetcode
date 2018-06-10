class Solution {
public:
    int maxDistToClosest(vector<int>& seats) {
        int n=seats.size();
        //left
        vector<int> left(n,0);
        if(seats[0]==0){
            left[0]=1;
        }
        else
            left[0]=0;
        for(int i=1;i<n;i++){
            if(seats[i]==0){
                left[i]=left[i-1]+1;
            }
            if(seats[i]==1){
                left[i]=0;
            }
            
        }
        //right
        vector<int> right(n,0);
        if(seats[n-1]==0){
            right[n-1]=1;
        }
        else
            right[n-1]=0;
        for(int i=n-2;i>=0;i--){
            if(seats[i]==0){
                right[i]=right[i+1]+1;
            }
            if(seats[i]==1){
                right[i]=0;
            }
            
        }
        vector<int> ans(n,0);
        ans[0]=max(left[0],right[0]);
        ans[n-1]=max(left[n-1],right[n-1]);
        for(int i=1;i<n-1;i++){
            ans[i]=min(left[i],right[i]);
        }
        // for(auto& i:ans)
        //     cout<<i<<" ";
        return *max_element(ans.begin(),ans.end());
    }
};