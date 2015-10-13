a , b = map(int , raw_input().split())
count = a 
while (a >=b):
	div = a/b 
	rem = a%b 
	count += div 
	a = div+rem 
print count 