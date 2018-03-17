class Solution:
    def check(self,num):
        temp = num
        while temp:
            if not temp % 10 or num % (temp % 10): return False
            temp = temp//10
        return True
    def selfDividingNumbers(self, left, right):
        result=[]
        for i in range(left,right+1):
            if(self.check(i)):
                result.append(i)
        return result
        