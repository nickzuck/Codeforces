n = int(raw_input())
ans = 0 
for i in range(n):
	str = raw_input()
	if '++' in str:
		ans += 1 
	if '--' in str :
		ans -= 1 
print ans