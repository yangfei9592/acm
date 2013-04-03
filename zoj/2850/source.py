#!/usr/bin/env python
import sys


#for line in sys.stdin:
line = sys.stdin.readline()
arr = line.split()
#print "count:%d" %len(arr)
m = int(arr[0])
n = int(arr[1])
while m != 0 and n != 0:
	print "%d*%d" %(m,n)
	for i in range(0,m):
#		print "m=%d n=%d"%(m,n)
		mn = sys.stdin.readline()
		print "data:%s" %mn,
	arr = sys.stdin.readline().split()
	m = int(arr[0])
	n = int(arr[1])

		

