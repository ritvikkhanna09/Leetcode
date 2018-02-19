class Solution:
    def isValid(self, s):
        s=list(s)
        l=[]
        for i in range(len(s)):
            if s[i] == '(' or s[i]== '{' or s[i]== '[':
                l.append(s[i])
            elif s[i]==')':
                if l and l[len(l)-1] == '(':
                    l.pop(len(l)-1)
                else:
                    return False
            elif s[i] == '}':
                if l and l[len(l)-1] == '{':
                    l.pop(len(l)-1)
                else:
                    return False
            
            elif s[i] == ']':
                if l and l[len(l)-1] == '[':
                    l.pop(len(l)-1)
                else:
                    return False
        
        if not l:
            return True
        else:
            return False