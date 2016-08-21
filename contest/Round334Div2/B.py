n, k = map(int, raw_input().split())
s = map(int, raw_input().split())
k = k - (n/2)
if k > 0:
    kAns = max(s[n-k:])
    ans = kAns
else:
    ans = 0
j = n-k-1
i = 0 
while(i < j):
    temp = s[i] + s[j]
    if temp > ans :
        ans = temp 
    i += 1 
    j -= 1
print ans
