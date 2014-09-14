#!/usr/bin/python
__author__ = 'blithejack'

def find5(x):
    cnt = 0
    while ((x>0) and (x%5 == 0)):
        x = int(x/5)
        cnt += 1
    return cnt

def trailingZeroes(n):
    zeroes = 0
    for i in range(1,n+1):
        zeroes += find5(i)
    return zeroes

if __name__ == "__main__":
    n = 10000
    print("Trailing 0s in "+str(n)+"! is "+str(trailingZeroes(n)))

    assert (2499 == trailingZeroes(10000))