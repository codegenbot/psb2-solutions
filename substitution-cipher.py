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
This problem gives 3 strings. The first two represent a cipher, mapping each character in one string to the one at the same index in the other string. The program must apply this cipher to the third string and return the deciphered message.
For example,
input:
a
b
a
output:
b
input:
a
b
b
output:
a
input:
a
b
ab
output:
ba
input:
a
b
ba
output:
ab
input:
a
b
aba
output:
bab
input:
a
b
bab
output:
aba
input:
a
b
abab
output:
baba
input:
a
b
baba
output:
abab
input:
a
b
ababa
output:
babab
input:
a
b
babab
output:
ababa
input:
a
b
ababab
output:
bababa
input:
a
b
bababa
output:
ababab
input:
a
b
abababa
output:
bababab
input:
a
b
bababab
output:
abababa
input:
a
b
abababab
output:
babababa
input:
a
b
babababa
output:
abababab
input:
a
b
ababababa
output:
babababab
input:
a
b
babababab
output:
ababababa
input:
a
b
ababababab
output:
bababababa
input:
a
b
bababababa
output:
ababababab
input:
a
b
abababababa
output:
bababababab
input:
a
b
bababababab
output:
abababababa
input:
a
b
abababababab
output:
babababababa
input:
a
b
babababababa
output:
abababababab
input:
a
b
ababababababa
output:
babababababab
input:
a
b
babababababab
output:
ababababababa
input:
a
b
ababababababab
output:
bababababababa
input:
a
b
bababababababa
output:
ababababababab
input:
a
b
abababababababa
output:
bababababababab
input:
a
b
bababababababab
output:
abababababababa
input:
a
b
abababababababab
output:
babababababababa
input:
a
b
babababababababa
output:
abababababababab
input:
a
b
ababababababababa
output:
babababababababab
input:
a
b
babababababababab
output:
ababababababababa
input:
a
b
ababababababababab
output:
bababababababababa
input:
a
b
bababababababababa
output:
ababababababababab
input:
a
b
abababababababababa
output:
bababababababababab
input:
a
b
bababababababababab
output:
abababababababababa
input:
a
b
abababababababababab
output:
babababababababababa
input:
a
b
babababababababababa
output:
abababababababababab
input:
a
b
ababababababababababa
output:
babababababababababab
input:
a
b
babababababababababab
output:
ababababababababababa
input:
a
b
ababababababababababab
output:
bababababababababababa
input:
a
b
bababababababababababa
output:
ababababababababababab
input:
a
b
abababababababababababa
output:
bababababababababababab
input:
a
b
bababababababababababab
output:
abababababababababababa
input:
a
b
abababababababababababab
output:
babababababababababababa
input:
a
b
babababababababababababa
output:
abababababababababababab
input:
a
b
ababababababababababababa
output:
babababababababababababab
input:
a
b
babababababababababababab
output:
ababababababababababababa
input:
a
b
ababababababababababababab
output:
bababababababababababababa
input:
a
b
bababababababababababababa
output:
ababababababababababababab
input:
a
b
abababababababababababababa
output:
bababababababababababababab
input:
a
b
bababababababababababababab
output:
abababababababababababababa
input:
a
b
abababababababababababababab
output:
babababababababababababababa
input:
a
b
babababababababababababababa
output:
abababababababababababababab
input:
a
b
ababababababababababababababa
output:
babababababababababababababab
input:
a
b
babababababababababababababab
output:
ababababababababababababababa
input:
a
b
ababababababababababababababab
output:
bababababababababababababababa
input:
a
b
bababababababababababababababa
output:
ababababababababababababababab
input:
a
b
abababababababababababababababa
output:

input:
a
a
a
output:
a
input:
j
h
j
output:
h
input:
a
z
a
output:
z
input:
e
l
eeeeeeeeee
output:
llllllllll
"""
if __name__ == '__main__':
