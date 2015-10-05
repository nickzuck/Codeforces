n = int (raw_input())
max = 0 
passInside = 0 
for i in range(n):
	#a passengers exit (1)
	#b passengers enter (2)
	a , b =  map(int , raw_input().split())
	passInside -= a 
	passInside += b 
	if passInside > max :
		max = passInside 
	
print max