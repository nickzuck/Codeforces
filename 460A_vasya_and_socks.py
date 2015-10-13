n,m = map(int , raw_input().split())
count = n 
while(n>1):
	n /= m
	count += n 
print count