class Solution:
    def canPlaceFlowers(self, flowerbed, n):
        strr= ''.join(map(str,flowerbed))
        print(strr)
        res  = strr.replace('010', 'xxx').replace('10', 'xx').replace('01', 'xx').replace('00', '0x')
        print(res)
        return res.count('0') >= n 
        