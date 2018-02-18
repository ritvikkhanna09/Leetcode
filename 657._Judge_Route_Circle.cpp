class Solution: 
    def move(self,x,y,ch):
        if(ch=='U'):
            return x,y+1
        elif(ch=='D'):
            return x,y-1
        elif(ch=='R'):
            return x+1,y
        elif(ch=='L'):
            return x-1,y
    
    def judgeCircle(self, moves):
        x=0
        y=0
        for i in range(len(moves)):
            x,y=self.move(x,y,moves[i])
        if(x==0) and (y==0):
            return True
        else:
            return False