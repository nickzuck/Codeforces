n, m = map(int, raw_input().split())
a = map(int, raw_input().split())
b = map(int, raw_input().split())
d = {}
for i, v in enumerate(b):
    d[i] = v
t = sorted(d.iteritems(), key = lambda (k,v): (v,k))
ans = [0 for i in range(m)]
a.sort()
i = n-1 
j = m-1
while(i >= 0 and  j >= 0):
    number = t[j][1]
    count = 0 
    while(a[i] > number and  i >= 0 ):
        count += 1
        i -= 1
    ans[t[j][0]] = i + 1
    j -= 1
for i in ans:
    print i,
