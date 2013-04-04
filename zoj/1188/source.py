#!/usr/bin/env python

import sys

testCount = int(sys.stdin.readline())
print "testCount:%d" %testCount

for index in range(0,testCount):
	sys.stdin.readline()
	nm = sys.stdin.readline()
	n = int(nm.split()[0])
	m = int(nm.split()[1]) #line
	for i in range(0,m):
		print sys.stdin.readline(),
	print
