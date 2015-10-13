a , b = map(int , raw_input().split())
count = a 
#c indicated new set of candles to be burnt
c = a/b
#rem indicates the burnt candles which can't be transformed
rem = a%b 
count += c
while (True):
	c = (c + rem) / b
	rem = (c+rem)%b
	if (c + rem < b):
		break
	count += c
print count
	

	
