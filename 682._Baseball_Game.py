class Solution:
    def calPoints(self, ops):
        list=[]
        for i in ops:
            if i=="C":
                list.pop()
            elif i=="D":
                list.append(2*list[-1])
            elif i=="+":
                list.append(list[-1]+list[-2])
            else:
                list.append(int(i))
        return sum(list)
        