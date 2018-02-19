class Solution:
    def reverseVowels(self, s):
        s=list(s)
        last=len(s)-1
        flag=0
        vowels=['a','e','i','o','u','A','E','I','O','U']
        for x in s:
            if x in vowels:
                flag+=1
        count=0
        for i in range(len(s)):
            if s[i] in vowels:
                if count==int(flag/2):
                    return ''.join(s)
                count+=1
                for j in range(last,0,-1):
                    if s[j] in vowels:
                        temp=s[i]
                        s[i]=s[j]
                        s[j]=temp
                        last=j-1
                        break
        return ''.join(s)


#using pointers
'''
class Solution:
    def reverseVowels(self, s):
        l=list(s)
        vowels=['a','e','i','o','u','A','E','I','O','U']
        x,y=0,len(s)-1
        while(x<y):
            if l[x] in vowels and l[y] in vowels:
                l[x],l[y]=l[y],l[x]
                x+=1
                y-=1
            if l[x] not in vowels:
                x+=1
            if l[y] not in vowels:
                y-=1
        return ''.join(l)

'''