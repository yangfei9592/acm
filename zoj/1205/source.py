#!/usr/bin/env python

import sys

def transBase(x,base):
	result = []
	while not(x == 0):
		mod = x % base
		if mod < 10:
			result.append(str(mod))
		else:
			result.append(chr(ord('a') + mod - 10))
		x /= base
	result.reverse()
	if len(result) == 0:
		result = ["0"]
	return "".join(result)



line1 = sys.stdin.readline().rstrip()
line2 = sys.stdin.readline().rstrip()
while not(line1 == "") and not (line2 == ""):
	x = int(line1,20)
	y = int(line2,20)
	#print x + y
	print transBase(x + y,20)
	line1 = sys.stdin.readline().rstrip()
	line2 = sys.stdin.readline().rstrip()
