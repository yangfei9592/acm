#!/usr/bin/env python

import sys

def isDaffodil(number):
	tempsum = 0;
	n = number;
	while not(n == 0):
		a = n % 10
		tempsum += pow(a,3)
		n /= 10
	return tempsum == number

for line in sys.stdin:
	number = int(line)
	if isDaffodil(number):
		print "Yes"
	else:
		print "No"
