class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        return go(cost, cost.size());
    }
private:
    unordered_map<int,int> memo;
    int go(vector<int>& c, int n){
        if (memo.count(n)) return memo[n];
        if (n<=1) return memo[n]=c[n];
        return memo[n]=(n==c.size() ? 0 : c[n])+min(go(c,n-2),go(c,n-1));
    }
};