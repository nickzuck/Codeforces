from math import atan2 as angle
from math import pi
from math import fabs
n = input()
x = []
y = []
for _ in range(n):
    t1, t2 = map(int, raw_input().split())
    x.append(t1)
    y.append(t2)
m = float("inf")
twoPie = 2*pi
arr = [angle(y[i], x[i]) for i in range(n)]
for i, v in enumerate(arr):
    if arr[i] < 0:
        arr[i] = pi + (pi - fabs(v))
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
print v1+1, v2+1
