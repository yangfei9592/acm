#!/usr/bin/env python
import sys

line = sys.stdin.readline()
arr = line.split()
n = int(arr[0])
m = int(arr[1])
while m != 0 and n != 0:
	matrix = [None] * n
	for i in range(0,n):
		matrix[i] = sys.stdin.readline().split() 
	allCovered = True
	for line in matrix:
		for data in line:
			if int(data) == 0:
				allCovered = False
				break
		if not(allCovered):
			break

	mowedadjacent = False
	if not(allCovered):
		for i in range(0,n):
			for j in range(0,m):
				if int(matrix[i][j]) == 0:
					if i > 0:
						mowedadjacent = 0 == int(matrix[i - 1][j]) or mowedadjacent
					if i + 1 < n:
						mowedadjacent = 0 == int(matrix[i + 1][j]) or mowedadjacent
					if j > 0:
						mowedadjacent = 0 == int(matrix[i][j - 1]) or mowedadjacent
					if j + 1 < m:
						mowedadjacent = 0 == int(matrix[i][j + 1]) or mowedadjacent
				if mowedadjacent:
					break
			if mowedadjacent:
				break
					
	if not(allCovered) and not(mowedadjacent):
		print "Yes"
	else:
		print "No"					
	arr = sys.stdin.readline().split()
	n = int(arr[0])
	m = int(arr[1])
