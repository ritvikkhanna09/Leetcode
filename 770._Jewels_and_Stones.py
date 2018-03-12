class Solution:
    def numJewelsInStones(self, J, S):
        sum=0
        for i in J:
            for j in range(len(S)):
                if i==S[j]:
                    sum+=1
        return sum



"""
class Solution {
public:
    int numJewelsInStones(string J, string S) {
        int res = 0;
        set<char> setJ(J.begin(), J.end());
        for (char s : S) if (setJ.count(s)) res++;
        return res;
    }
};
"""