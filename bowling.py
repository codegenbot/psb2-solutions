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

def bowling_score(input):
    score = 0
    frame = 0
    first_in_frame = True
    for i in range(len(input)):
        if input[i] == 'X':
            score += 10
            if first_in_frame:
                score += get_value(input[i+1])
                score += get_value(input[i+2])
            else:
                score += get_value(input[i+1])
            frame += 1
            first_in_frame = True
        elif input[i] == '/':
            score += 10 - get_value(input[i-1])
            score += get_value(input[i+1])
            frame += 1
            first_in_frame = True
        elif input[i] == '-':
            frame += 1
            first_in_frame = True
        else:
            score += get_value(input[i])
            if first_in_frame:
                first_in_frame = False
            else:
                frame += 1
                first_in_frame = True
    return score

def get_value(char):
    if char == 'X' or char == '/':
        return 10
    elif char == '-':
        return 0
    else:
        return int(char)

if __name__ == '__main__':
    print(bowling_score(input()))
