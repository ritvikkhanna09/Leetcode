class Solution:
    def letterCombinations(self, digits):
        keyboard_dict = {
            2: 'abc',
            3: 'def',
            4: 'ghi',
            5: 'jkl',
            6: 'mno',
            7: 'pqrs',
            8: 'tuv',
            9: 'wxyz',
        }
        ret = []
        for num in digits:
            if not ret:
                ret = [letter for letter in keyboard_dict[int(num)]]
                print(ret)
            else:
                ret = [str+letter for letter in keyboard_dict[int(num)] for str in ret]
                print(ret)
        return ret