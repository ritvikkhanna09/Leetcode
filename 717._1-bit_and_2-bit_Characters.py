class Solution:
    def isOneBitCharacter(self, bits):
        i=0
        while(i<len(bits)):
            if bits[i]==1:
                c=False
                i+=2
            else:
                c=True
                i+=1
        return c