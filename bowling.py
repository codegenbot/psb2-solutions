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

def scoring(frames):
    score=0
    for i in range(len(frames)):
        if (frames[i]=='X'):
            if frames[i+1]=='X':
                score=score+10+10+int(frames[i+2])
            else:
                score=score+10+int(frames[i+1])+int(frames[i+2])
        elif frames[i]=='/':
                score=score+10+int(frames[i+1])
        elif frames[i]=='-':
            score=score
        else:
            score=score+int(frames[i])
    return score

if __name__ == '__main__':
    frames=input()
    score=scoring(frames)
    print(score)
