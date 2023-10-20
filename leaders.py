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

def leader(arr):
    # Write your code here
    res = []
    for i in range(len(arr)):
        if i == len(arr)-1:
            res.append(arr[i])
            break
        for j in range(i+1,len(arr)):
            if arr[j] <= arr[i]:
                continue
            else:
                break
        if j == len(arr)-1:
            res.append(arr[i])
    return res





if __name__ == '__main__':
