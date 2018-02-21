class Solution:
    def canConstruct(self, ransomNote, magazine):
        mag=list(magazine)
        for i in ransomNote:
            if i in mag:
                print("in here")
                mag.remove(i)
                continue
            else:
                print("also")
                return False
        return True