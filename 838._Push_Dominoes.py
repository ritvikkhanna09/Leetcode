class Solution(object):
    def pushDominoes(self, dominoes):
        while(True):
            new = dominoes.replace('R.L', 'S')
            new = new.replace('.L','LL').replace('R.','RR')
            if new == dominoes:
                break
            else:
                dominoes = new
        return dominoes.replace('S', 'R.L')