class Solution:
    def numJewelsInStones(self, J, S):
        sum=0
        for i in J:
            for j in range(len(S)):
                if i==S[j]:
                    sum+=1
        return sum