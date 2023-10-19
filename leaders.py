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
Given a vector of positive integers, return a vector of the leaders in that vector.
A leader is deﬁned as a number that is greater than or equal to all the numbers tothe right of it.
The rightmost element is always a leader.
For example,input:0

output:0

input:1
0
output:1
0input:1
451output:1
451input:2
1000 0output:2
1000 0input:2
0 1000output:1
1000
"""
