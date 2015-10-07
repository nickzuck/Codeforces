n = int(raw_input())
count = 0
for i in range(n):
	p , q = map(int , raw_input().split())
	if (p+2 <= q):
		count  += 1 
print count