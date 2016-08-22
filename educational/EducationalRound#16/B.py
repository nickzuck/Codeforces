n = input()
a = map(int, raw_input().split())
m = min(a)
for i in xrange(n):
    a[i] -= m
s = sum(a)
print min(s/(n-1), (s/(n-1)) + 1)
