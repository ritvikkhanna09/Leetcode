class Solution(object):
    def shortestToChar(self, S, C):
        d = {}
        l = []
        for key, value in enumerate(S):
            if not d.get(value):
                d[value] = [key]
            else:
                d[value].append(key)
        print d
        for value in S:
            if value != C:
                l.append(min([abs(d[value][0] - x) for x in d[C]]))
                d[value].pop(0)
            else:
                l.append(0)
        return l
