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
Given a string representing a Boolean expression consisting of T, F, |, and &, evaluate it and return the resulting Boolean.
For example,
input:
t
output:
True
input:
f
output:
False
input:
f&f
output:
False
input:
f&t
output:
False
input:
t&f
output:
False
"""
if __name__ == '__main__':
    s = input()
    if s == 't':
        print(True)
    elif s == 'f':
        print(False)
    else:
        if s[1] == '&':
            print(s[0] == s[2])
        else:
            print(s[0] == 't' or s[2] == 't')
