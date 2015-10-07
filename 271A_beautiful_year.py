n = int(raw_input())
n+= 1
while(n < 90000):
	s = str(n)
	if (len(set(s)) == len(s)):
		break ; 
	else:
		n += 1 
print n 