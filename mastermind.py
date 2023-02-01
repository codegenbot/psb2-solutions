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
Based on the board game Mastermind. Given a Mastermind code and a guess, each of which are 4-character strings consisting of 6 possible characters, return the number of white pegs (correct color, wrong place) and black pegs (correct color, correct place) the codemaster should give as a clue.
For example,
input:
RRRR
RRRR
output:
04
input:
BOYG
GYOB
output:
40
input:
WYYW
BBOG
output:
00
input:
GGGB
BGGG
output:
22
input:
BBBB
OOOO
output:
00
"""
if __name__ == '__main__':
    code=input().strip()
    guess=input().strip()
    tmp1,tmp2=0,0
    for i in range(len(code)):
        if code[i]==guess[i]:
            tmp1+=1
    for i in set(code):
        tmp2+=min(code.count(i),guess.count(i))
    print(tmp1*10+tmp2-tmp1*10)
    
