n = int(raw_input())
flag = 0
a = [4, 7 , 47 , 74 , 444 , 447 , 474 , 477 , 744, 747 , 774 , 777]
for i in a :
	if n%i == 0 :
		flag = 1 
		break 
if (flag ==1):
	print 'YES'
else:
	print 'NO'