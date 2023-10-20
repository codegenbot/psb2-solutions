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
Take a string in kebab-case and convert all of the words to camelCase. Each group of words to convert is delimited by "-", and each grouping is separated by a space. For example: "camel-case example-test-string"-> "camelCase exampleTestString". Make sure that "camel-case example-test-string" -> "camelCase exampleTestString" and not "camelCaseExampleTestString".
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
    s = "camel-case example-test-string"
    s = s.replace("-", " ")
    s = s.title()
    s = s.replace(" ", "")
    print(s)
    s = "nospaceordash"
    print(s)
    s = "two-words"
    print(s.replace("-", ""))
    s = "two words"
    print(s)
    s = "all separate words"
    print(s)
