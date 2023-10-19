import os
import sys
import numpy as np
import math
import datetime
import collections
import itertools
import queue
import re
"""
Given a vector of positive integers, return a vector of the leaders in that vector. A leader is deﬁned as a number that is greater than or equal to all the numbers tothe right of it. The rightmost element is always a leader.
For example,
input:
0

output:
0

input:
1
0
output:
1
0
input:
1
451
output:
1
451
input:
2
1000 0
output:
2
1000 0
input:
2
0 1000
output:
1
1000
"""
if __name__ == '__main__':
    # sys.stdin = open('input.txt','r')
    # sys.stdout = open('output.txt','w')
    file = sys.stdin
    f = open('input.txt','r')
    # f = open('output.txt','w')
    n = int(f.readline().strip())
    a = list(map(int,f.readline().split()))
    m = a[-1]
    print(m,end=' ')
    for i in range(n-2,-1,-1):
        if a[i]>=m:
            print(a[i],end=' ')
            m = a[i]
    print()
    # print(n,a)
