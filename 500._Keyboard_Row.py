class Solution:
    def findWords(self, words):
        X=list("qwertyuiopQWERTYUIOP")
        Y=list("ASDFGHJKLasdfghjkl")
        Z=list("ZXCVBNMzxcvbnm")
        result=list(words)
            
        for i in range(len(words)):
            if not words[i]:
                return result
            if words[i][0] in X:
                for j in words[i]:
                    print(j)
                    if j not in X:
                        result.remove(words[i])
                        break
            elif words[i][0] in Y:
                for j in words[i]:
                    if j not in Y:
                        result.remove(words[i])
                        break
            elif words[i][0] in Z:
                for j in words[i]:
                    if j not in Z:
                        result.remove(words[i])
                        break
        return result
                    
        