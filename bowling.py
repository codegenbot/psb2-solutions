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

def score(input):
    score = 0
    frame = 0
    first = True
    for i in range(len(input)):
        if input[i] == 'X':
            score += 10
            if i < len(input) - 2:
                if input[i+1] == 'X':
                    score += 10
                    if input[i+2] == 'X':
                        score += 10
                    else:
                        score += int(input[i+2])
                else:
                    score += int(input[i+1])
                    if input[i+2] == '/':
                        score += 10 - int(input[i+1])
                    else:
                        score += int(input[i+2])
        elif input[i] == '/':
            score += 10
            if i < len(input) - 1:
                if input[i+1] == 'X':
                    score += 10
                else:
                    score += int(input[i+1])
        elif input[i] == '-':
            score += 0
        else:
            score += int(input[i])
        frame += 1
        if frame == 10:
            break
    return score

if __name__ == '__main__':
