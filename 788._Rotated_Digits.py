class Solution:
    def rotatedDigits(self, N):
        count=0
        dictrot={'0':'0','1':'1','2':'5','3':'3','4':'4','5':'2','6':'9','7':'7','8':'8','9':'6'}
        for digit in range(1,N+1):
            flag=0
            # print("ont this digit::",digit)
            str_temp=str(digit)
            rot=""
            for number in str_temp:
                if number not in ['2','1','0','5','6','8','9']:
                    flag=1
                rot+=dictrot[number]
            # print("rot::",rot)
            if(rot!=str_temp and flag==0):
                count+=1
            # print("count::",count)
        return count
        