class Solution:
    def complexNumberMultiply(self, a, b):
        x,y=a.strip('i').split('+')
        z,w=b.strip('i').split('+')
        x=int(x)
        y=int(y)
        z=int(z)
        w=int(w)
        p=x*z-y*w
        q=x*w+y*z
        return str(p)+"+"+str(q)+"i"