class Solution:
    def reverse(self, x):
        l=list(str(x))
        if x>0:
            print(l)
            for i in range(len(l)//2):
                l[i],l[len(l)-1-i]=l[len(l)-1-i],l[i]
            print(l)
            x= int(''.join(l))
        else:
            l=list(str(abs(x)))
            for i in range(len(l)//2):
                l[i],l[len(l)-1-i]=l[len(l)-1-i],l[i]
            x= -int(''.join(l))
        neg_limit= -0x80000000
        pos_limit= 0x7fffffff

        if(x<0):
            val=x&neg_limit
            if(val==neg_limit):
                return x
            else:
                return 0
        elif(x==0):
            return x
        else:
            val = x&pos_limit
            if(val==x):
                return x
            else:
                return 0