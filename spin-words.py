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
Given a string of one or more words (separated by spaces), reverse all of the words that are five or more letters long and return the resulting string.
For example,
input:

output:

input:
a
output:
a
input:
this is a test
output:
this is a test
input:
this is another test
output:
this is rehtona test
input:
hi
output:
hi
"""
if __name__ == '__main__':
    input = "this is a test"
    words = input.split(" ")
    output = ""
    for word in words:
        if len(word) >= 5:
            output += word[::-1] + " "
        else:
            output += word + " "
    print(output.strip())
