class Solution:
    def rotateString(self, A, B):
        i=0
        while(i<len(A)+1):
            temp=A[i:len(A)]+A[:i]
            i+=1
            #print(temp)
            if temp==B:
                return True
        return False