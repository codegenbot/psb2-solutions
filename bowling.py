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
Given a string representing the individual bowls in a 10-frame round of 10 pin bowling, return the score of that round.
For example,
input:
--------------------
output:
0
input:
XXXXXXXXXXXX
output:
300
input:
5/5/5/5/5/5/5/5/5/5/5
output:
150
input:
7115XXX548/279-X53
output:
145
input:
532/4362X179-41447/5
output:
100
"""
if __name__ == '__main__':
    s = 'XXXXXXXXXXXX'
    score = 0
    cnt = 0
    for i in range(10):
        if s[cnt] == 'X':
            score += 10
            cnt += 1
            if s[cnt] == 'X' and cnt < 22:
                score += 10
                if s[cnt+1] == 'X' and cnt+1 < 22:
                    score += 10
                elif cnt+1 < 22:
                    score += int(s[cnt+1])
            else:
                if s[cnt+1] == '/' and cnt+1 < 20:
                    score += 10
                elif cnt+1 < 20:
                    score += int(s[cnt]) + int(s[cnt+1])
        elif s[cnt] == '-':
            cnt += 1
        elif s[cnt+1] == '/' and cnt+1 < 20:
            score += 10
            cnt += 2
            if s[cnt] == 'X' and cnt < 20:
                score += 10
            elif cnt < 20:
                score += int(s[cnt])
        else:
            if s[cnt+1] == '-' and cnt+1 < 20:
                score += int(s[cnt])
            elif cnt+1 < 20:
                score += int(s[cnt]) + int(s[cnt+1])
            cnt += 2
    print(score)
