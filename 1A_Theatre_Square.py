n , m , a = map(int , raw_input().split())
ans = m/a + n/a ;
if (m%a > 0):
	ans += 1 
if (n%a > 0):
	ans += 1
print ans