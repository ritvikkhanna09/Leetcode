class Solution {
public:
    int distributeCandies(vector<int>& c) {
        int n=c.size();
        // vector<int> freq(n,0);
        set<int> ty;
        for(int i=0;i<n;i++){
            // freq[c[i]]++;
            ty.insert(c[i]);
        }
        int kinds=ty.size();
        if(n/2>kinds)
            return kinds;
        else
            return n/2;
    }
};