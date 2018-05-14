class Solution:
    def largeGroupPositions(self, S):
        ls=[]
        count=1
        start=0
        end=0
        for i in range(1,len(S)):
            if S[i]!=S[i-1]:
                if(count>=3):
                    print("appending::",[start,end])
                    ls.append([start,end])
                count=1
                start=i
                end=i
            else:
                count+=1
                end=i
            if count>=3 and end==len(S)-1:
                print("appending::",[start,end])
                ls.append([start,end])
        return ls