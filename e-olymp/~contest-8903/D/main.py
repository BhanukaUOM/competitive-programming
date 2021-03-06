#!/usr/bin/python3

from itertools import combinations
from functools import reduce


def gcd(*numbers):
    from fractions import gcd
    return reduce(gcd, numbers)


def lcm(*numbers):
    def lcm(a, b):
        return (a * b) // gcd(a, b)
    return reduce(lcm, numbers, 1)


m = int(input())

for i in range(m):
    ns = list(map(int, input().split(' ')))[1:]
    print (lcm(*ns))
