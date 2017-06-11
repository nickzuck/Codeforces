n, k = map(int, raw_input().split())
s = map(int, raw_input().split())
su = sum(s[0:k])
fs = su
si = 0 
ei = k
for i in range(n-k):
    su = su-s[si]+s[ei]
    fs += su 
    si += 1
    ei += 1

div = float(n-k+1)
print '{0:.16f}'.format(fs/div)
