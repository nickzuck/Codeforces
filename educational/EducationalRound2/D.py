from math import acos, pi,sqrt, fabs, sin
x1, y1, r1 = map(int, raw_input().split())
x2, y2, r2 = map(int, raw_input().split())
d = sqrt((x2-x1)*(x2-x1) + (y2-y1)*(y2-y1))
if d >= r1 + r2 :
    print "0.000000"
elif(d <= fabs(r1-r2)):
    t = min(r1, r2)
    print "%.6f" %(pi * t*t)
else:    
    p1 = acos((d*d + r1*r1 - r2*r2)/ (2*d*r1))
    print p1
    p1 *= 2
    p2 = acos((d*d + r2*r2 - r1*r1)/(2*d*r2))
    print p2
    p2 *= 2
    ans = 0.5*((r1*r1)*(p1-sin(p1))+(r2*r2)*(p2-sin(p2)))
    print ans
