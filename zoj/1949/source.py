#!/usr/bin/env python

import sys
n = int(sys.stdin.readline())
while not(0 == n):
	bitMatrix = [None] * n
	errorRow = []
	errorCol = []
	for i in range(0,n):
		line = sys.stdin.readline().split()
		for col in range(0,len(line)):
			line[col] = int(line[col])
		bitMatrix[i] = line
		rowsum = sum(line)
		if not(rowsum % 2 == 0):
			errorRow.append(i)
	for r in range(0,n):
		colsum = 0
		for i in range(0,n):
			colsum += bitMatrix[i][r]
		if not(colsum % 2 == 0):
			errorCol.append(r)
#	print bitMatrix
#	print errorRow
#	print errorCol
	if len(errorRow) == 0 and len(errorCol) == 0:
		print "OK"
	elif len(errorRow) == 1 and len(errorCol) == 1:
		print "Change bit (%d,%d)" %(errorRow[0] + 1,errorCol[0] + 1)
	else:
		print "Corrupt"
	n = int(sys.stdin.readline())
