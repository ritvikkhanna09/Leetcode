def rotatedDigits(self, N):
    def isValidRotation(num):
        return (not any(s in {'3', '4', '7'} for s in num)) and any(s in {'2', '5', '6', '9'} for s in num)

    return sum([isValidRotation(str(i)) for i in range(1, N+1)])