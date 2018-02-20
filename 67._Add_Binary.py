class Solution:
    def tobinary(self,s):
        t=1
        res=0
        while(s>=1):
            res+=(s%2)*t
            t=t*10
            s//=2
        return int(res)
    
    def todecimal(self,x):
        t=1
        res=0
        while(x>=1):
            res+=(x%10)*t
            x//=10
            t*=2
        return int(res)
    
    def addBinary(self, a, b):
        numsum=self.todecimal(int(a))+self.todecimal(int(b))
        return str(self.tobinary(numsum))
        