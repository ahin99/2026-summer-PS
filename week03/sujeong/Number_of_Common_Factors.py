# 2427. Number of Common Factors
class Solution:
    def commonFactors(self, a: int, b: int) -> int:
        if a>b:
            c = a
        else:
            c = b

        k = 0
        for i in range(1,c+1):
            if (a%i + b%i) ==0:
                k += 1

        return k 
