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
This problem gives 3 strings. The first two represent a cipher, mapping each character in one string to the one at the same index in the other string. The program must apply this cipher to the third string and return the deciphered message.
For example,
input:
abc
def
abc
def
output:
def
input:
a
a
a
output:
a
input:
j
h
j
output:
h
input:
a
z
a
output:
z
input:
e\n
l
eeeeeeeeee\n
output:
llllllllll
input:


























































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































"""

def cipher(s1,s2,s3):
    d = {}
    for i in range(len(s1)):
        d[s1[i]] = s2[i]
    ans = ""
    for i in range(len(s3)):
        ans += d[s3[i]]
    return ans

if __name__ == '__main__':
    s1 = input()
    s2 = input()
    s3 = input()
    ans = cipher(s1,s2,s3)
    print(ans)
