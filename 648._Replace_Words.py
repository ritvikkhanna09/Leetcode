class Solution:
    def replaceWords(self, dict, sentence):
        """
        :type dict: List[str]
        :type sentence: str
        :rtype: str
        """
        sorted(dict)
        sen=sentence.split(" ");
        print(dict)
        for i in range(len(sen)):
            for ele in dict:
                if(ele==sen[i][0:len(ele)]):
                    sen[i]=ele
        return ' '.join(sen)
                    
            