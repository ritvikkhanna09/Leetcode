class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        int n=cost.size();
        vector<int> arr(n);
        arr[0]=cost[0];
        arr[1]=cost[1];
        for (int i=2; i<n; ++i)
            arr[i]=cost[i]+min(arr[i-2],arr[i-1]);
        for (int i=0; i<arr.size(); ++i)
            cout<<arr[i]<<" ";
        return min(arr[n-2],arr[n-1]);
    }
};