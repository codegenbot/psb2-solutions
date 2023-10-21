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
    s = input()
    ss = s.split(" ")
    for i in range(len(ss)):
        if "-" in ss[i]:
            sss = ss[i].split("-")
            for j in range(len(sss)):
                if j == 0:
                    sss[j] = sss[j].title()
                else:
                    sss[j] = sss[j].capitalize()
            ss[i] = "".join(sss)
        else:
            ss[i] = ss[i].title()
    ans = " ".join(ss)
    print(ans)
