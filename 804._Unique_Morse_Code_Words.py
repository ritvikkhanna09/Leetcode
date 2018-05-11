class Solution:
    def uniqueMorseRepresentations(self, words):
        count=0
        code=[".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."]
        encode=[]
        for word in words:
            temp=""
            for letter in word:
                index=ord(letter)-97
                temp+=code[index]
            encode.append(temp)