class Solution:
    def checkRecord(self, s):
        flag=0
        if s.find("LLL")>=0:
            
            return False
        for i in s:
            if i=='A':
                flag+=1
        
        if flag>1:
            return False
        else:
            return True