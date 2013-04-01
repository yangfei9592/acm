#!/usr/bin/env python

import sys
for line in sys.stdin:
    a = line.split()
    print int(a[0]) + int(a[1])

