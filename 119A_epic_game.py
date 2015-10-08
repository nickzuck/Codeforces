def gcd(a , b):
	if (b == 0):
		return a 
	else:
		return gcd(b , a%b) 


def change (prev):
	if (prev == 1):
		return 0 
	elif(prev == 0):
		return 1


a, b ,n = map(int , raw_input().split())
if (a == 1 and b == 1):	
	if (n %2 == 0):
		prev = 1 
	else :
		prev = 0
elif (a == n):
	prev = 0
elif (b == n):
	prev = 1 
else:
	prev = 1
	while(n > 0):
		if (prev == 1):
			g = gcd(a ,n)
		else :
			g = gcd (b ,n)
		if (g <= n ):
			prev = change(prev) 
			n -= g 
		else :
			n -= g
print prev