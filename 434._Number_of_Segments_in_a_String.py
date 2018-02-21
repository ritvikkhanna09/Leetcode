class Solution:
    def countSegments(self, s):
        s=s.strip(' ').split(' ')
        s=list(filter(None,s))
        print(s)
        if s:
            return len(s)
        else:
            return 0