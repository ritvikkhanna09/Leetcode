def mostCommonWord(self, paragraph, banned):
        """
        :type paragraph: str
        :type banned: List[str]
        :rtype: str
        """
        return collections.Counter(i.lower() for i in re.split("\W+", paragraph) if i and i.lower() not in banned).most_common(1)[0][0]