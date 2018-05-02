class Solution:
    def subdomainVisits(self, cpdomains):
        d = collections.defaultdict(int)
        for i in range(len(cpdomains)):
            x,y=cpdomains[i].split(" ")
            while '.' in y:
                d[y]+=int(x)
                y = y.split('.', 1)[1]
            else:
                d[y]+=int(x)
        return ['%d %s' % (v, k) for k, v in d.items()]