import math


def maxGcd():
    n = int(input())
    sumx = 0
    for i in range(1, (n+1)):
        sumx += i * math.gcd(i, n)
       
    return sumx


print(maxGcd())

