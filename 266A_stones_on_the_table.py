n = int(raw_input())
countMin = n 
s = raw_input()
count = 0  
prev = s[0]
for i in range(1 , len(s)):
	if (s[i] == prev):
		count += 1
	else :
		if (countMin > count):
			countMin = count 
if countMin == n :
	countMin -= 1 

print countMin