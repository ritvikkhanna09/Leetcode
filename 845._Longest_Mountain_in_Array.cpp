class Solution {
public:
    int longestMountain(vector<int>& a) {
        int n = a.size();
        if (n == 0) return 0;
        vector<int> L(n), R(n);
        L[0] = 1;
        for (int i = 1; i < n; ++i) {
            if (a[i] > a[i - 1]) {
                L[i] = L[i - 1] + 1;
            } else {
                L[i] = 1;
            }
        }
        R[n - 1] = 1;
        for (int i = n - 2; i >= 0; --i) {
            if (a[i] > a[i + 1]) {
                R[i] = R[i + 1] + 1;
            } else {
                R[i] = 1;
            }
        }
        for (auto i:L){
            cout<<i<<" ";
        }
        cout<<endl;
        for (auto i:R){
            cout<<i<<" ";
        }
        int ret = 0;
        for (int i = 1; i < n - 1; ++i) {
            if (L[i] > 1 && R[i] > 1) ret = max(ret, L[i] + R[i] - 1);
        }
        if (ret < 3) ret = 0;
        return ret;
    }
};