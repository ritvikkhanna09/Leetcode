class Solution:
    def findWords(self, words):
        set_1 = set(list("QWERTYUIOPqwertyuiop"))
        set_2 = set(list("ASDFGHJKLasdfghjkl"))
        set_3 = set(list("ZXCVBNMzxcvbnm"))
        out_list = []
        for word in words:
            set_w = set(word)
            if (set_w.issubset(set_1)) or (set_w.issubset(set_2)) or (set_w.issubset(set_3)):
                out_list.append(word)
        return out_list