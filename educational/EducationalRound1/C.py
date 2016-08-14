from math import atan2 as angle
from math import fabs
pi = 3.14159265358979323846
n = input()
x = []
y = []
for _ in range(n):
    t1, t2 = map(int, raw_input().split())
    x.append(t1)
    y.append(t2)
m = float("inf")
twoPie = 2*pi
d = dict()
for i in range(n):
    d[i] = angle(y[i], x[i])
print d
for i,v in enumerate(d):
    if d[i] < 0 :
        d[i] = pi + (pi - fabs(d[i]))
print d

from collections import OrderedDict
od = OrderedDict(sorted(d.items(), key=lambda t: t[1]))
print od
fl = list(od)
for i in range(n-1):
    diff = od[fl[i+1]] - od[fl[i]]
    if diff < m :
        m = diff 
        v1 = fl[i+1] 
        v2 = fl[i]
    print diff 

diff = twoPie -  (od[fl[n-1]] - od[fl[0]])
if diff < m :
    v1 = fl[n-1]
    v2 = fl[0]
"""

    if < 0:
        arr[i] = {i : pi + (pi - fabs(v))}
print arr
"""
"""
arr.sort()
for i in range(n-1):
    diff = arr[i+1] - arr[i]
    if diff < m :
        m  = diff 
        v1 = i
        v2 = j

diff = twoPie - (arr[n-1] - arr[0])
if diff < m:
    v1 = n-1 
    v2 = 0
"""
"""
for i in range(n-1):
    for j in range(i+1, n):
        #print "i = %d j = %d" %(i, j)
        t1 = fabs(arr[i] - arr[j])
        t2 = twoPie - t1
        #print t1, t2
        c = min(t1, t2)
        if c < m:
            m = c
            v1 = i
            v2 = j
"""
print v1+1, v2+1

