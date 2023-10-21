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
Given an integer representing a number of hours and 3 floats representing how much snow is on theground, the rate of snow fall, and the proportion of snow melting per hour, return the amount of snow on the ground after the amount of hours given. Each hour is considered a discrete event of adding snow and then melting, not a continuous process.
For example,
input:
0
0.0
0.0
0.0
output:
0.0
input:
15
15.0
15.0
0.15
output:
92.5748913763936
input:
20
19.99
9.999
0.999
output:
10.00900900900901
input:
20
19.99
9.999
0.0
output:
219.96999999999994
input:
10
0.0
1.0
0.0
output:
10.0
"""
if __name__ == '__main__':
    hours = int(input("Enter hours: "))
    snow_on_ground = float(input("Enter snow on ground: "))
    rate_of_snow_fall = float(input("Enter rate of snow fall: "))
    proportion_of_snow_melting = float(input("Enter proportion of snow melting: "))
    for i in range(hours):
        snow_on_ground += rate_of_snow_fall
        if snow_on_ground > 0:
            snow_on_ground -= proportion_of_snow_melting * snow_on_ground
    print(snow_on_ground)
