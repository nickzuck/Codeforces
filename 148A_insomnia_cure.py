a = [input() for i in range(4)]
d = input() 
count = 0 
for i in range(1 , d+1):
	if (i%a[0] == 0 or i%a[1] ==0 or i%a[2] == 0 or i %a[3] == 0):
		count += 1
print count
		