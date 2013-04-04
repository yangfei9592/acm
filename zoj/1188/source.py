#!/usr/bin/env python

import sys

testCount = int(sys.stdin.readline())
#print "testCount:%d" %testCount

def unsortedness(str):
	count = 0
	for i in range(0,len(str)):
		for j in range(i + 1,len(str)):
			if str[i] > str[j]:
				count += 1
	return count




for index in range(0,testCount):
	sys.stdin.readline()
	nm = sys.stdin.readline()
	n = int(nm.split()[0])
	m = int(nm.split()[1]) #line
	DNAArr = [None] * m
	for i in range(0,m):
		str = sys.stdin.readline().rstrip()
		DNAArr[i] = [str,unsortedness(str)]
	
	for i in range(0,m):
		for j in range(i + 1,m):
			if DNAArr[i][1] > DNAArr[j][1]:
				temp = DNAArr[i]
				DNAArr[i] = DNAArr[j]
				DNAArr[j] = temp
	
	for i in range(0,m):
		print DNAArr[i][0]
	
	if index < testCount - 1:
		print

