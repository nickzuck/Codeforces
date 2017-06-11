n = raw_input()
nod = len(n)
s = str(int(n[0])+1)
if nod == 1:
    ans = 1
else:
    targetYear = int(s+'0'*(nod-1))
    ans = targetYear-int(n)
print ans
