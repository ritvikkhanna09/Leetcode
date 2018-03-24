class Solution:
    def plusOne(self, digits):
        integer=0
        for i in range(len(digits)):
            integer+=(digits[len(digits)-1-i]*pow(10,i))
        integer+=1
        l=[int(x) for x in str(integer)]
        return l
        