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
Take a string in kebab-case and convert all of the words to camelCase. Each group of words to convert is delimited by "-", and each grouping is separated by a space. For example: "camel-case example-test-string"-> "camelCase exampleTestString".
For example,
input:

output:

input:
nospaceordash
output:
nospaceordash
input:
two-words
output:
twoWords
input:
two words
output:
two words
input:
all separate words
output:
all separate words
"""
if __name__ == '__main__':
    try:
        s = input()
    except EOFError:
        print('')
        sys.exit()
    s = s.split(' ')
    for i in range(len(s)):
        s[i] = s[i].split('-')
        for j in range(len(s[i])):
            s[i][j] = s[i][j].capitalize()
        s[i] = ''.join(s[i])
    s = ' '.join(s)
    print(s)
