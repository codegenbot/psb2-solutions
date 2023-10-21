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
    input = input()
    input = input.split(" ")
    for i in range(len(input)):
        input[i] = input[i].split("-")
    for i in range(len(input)):
        for j in range(len(input[i])):
            if j == 0:
                input[i][j] = input[i][j].lower()
            else:
                input[i][j] = input[i][j].capitalize()
        input[i] = "".join(input[i])
    input = " ".join(input)
    print(input)
