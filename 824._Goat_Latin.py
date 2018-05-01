class Solution:
    def check(self,word):
        if word[0] in 'aeiouAEIOU':
            return word+"ma"
        else:
            return word[1:]+word[0]+"ma"
    def toGoatLatin(self, S):
        list_s=list(S.split(" "))
        for i in range(len(list_s)):
            x=self.check(list_s[i])
            r='a'*(i+1)
            x=x+r
            list_s[i]=x
        return ' '.join(list_s)
        