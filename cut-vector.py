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
Given a vector of positive integers, ﬁnd the spot where, if you cut the vector, the numbers on both sides are either equal, or the diﬀerence is as small as possible. Return the two resulting subvectors as two outputs.
For example,
input:
1
0
output:
100
input:
1
10
output:
1100
input:
1
100
output:
11000
input:
1
1000
output:
110000
input:
1
10000
output:
1100000
"""
if __name__ == '__main__':
    for line in sys.stdin:
        N = int(line)
        a = bin(N)[2:]
        if len(a) % 2 == 0:
            print(a[:len(a) // 2] + a[len(a) // 2 :])
        else:
            print(a[:len(a) // 2] + a[len(a) // 2 - 1 :])
