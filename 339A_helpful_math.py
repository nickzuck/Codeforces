s = raw_input() 
arr = s.split("+")
arr.sort()
newstr = ''
for i in range(len(arr)):
	newstr += arr[i]
	if (i != len(arr)-1):
		newstr += '+'
print newstr
	
	