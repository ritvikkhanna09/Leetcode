class Solution:
    def numUniqueEmails(self, emails):
        result=[]
        for idadd in emails:
            parts=idadd.split('@')
            name=""
            for i in parts[0]:
                if(i=='+'):
                    break
                elif(i=='.'):
                    continue
                else:
                    name=name+i
            result.append(name+'@'+parts[1])
        return len(set(result))