class Solution:
    def mostCommonWord(self, paragraph, banned):
        banned=set(banned)
        count = collections.defaultdict(int)
        for word in paragraph.lower().split():
            temp=word.strip("!?',;.")
            # print(temp)
            count[temp]+=1
        result=0
        max_word=''
        for word in count:
            if count[word]>result and word not in banned:
                max_word=word
                result=count[word]
        return max_word