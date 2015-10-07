n = input()
arr = map(int , raw_input().split())
arr.sort()
sum = 0 
for i in arr:
	sum += i 
halfsum = sum/2  
i = len(arr) - 1
mysum =0 
mycount = 0
while(i>=0):
	if (mysum <= halfsum):
		mycount += 1
		mysum += arr[i] 
		i -=1
	else:
		break
print mycount 