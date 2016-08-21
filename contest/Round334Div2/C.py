n = input()
s = raw_input()
ans = 1 
for i in range(1, n):
    ans += 1 if s[i] != s[i-1] else 0
    
print min(ans+2, n)
