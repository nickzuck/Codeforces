n, k = map(int, raw_input().split())
s = map(int, raw_input().split())
orgK = k
k = k - (n/2)
if k > 0:
    kAns = max(s[n-k:])
    ans = kAns
else:
    ans = 0
for i in range(0, n-orgK):
    ans = max(ans, s[i] + s[2*(n-orgK) -1 - i])
print ans
