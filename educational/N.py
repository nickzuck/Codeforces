from math import sqrt
a, b, c = map(int, raw_input().split())
t1 = sqrt((b**2) - (4*a*c))
t2 = 2*a
ans1 = (-b + t1)/t2
ans2 = (-b - t1)/t2
print max(ans1, ans2)
print min(ans1, ans2)
