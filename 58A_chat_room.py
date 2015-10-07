a = ['h' ,'e','l','l','o']
s = raw_input()
i = 0 
for j in s :
	if (i>=5):
		break;
	if (j == a[i]):
		i += 1
#print i
if (i==5):
	print 'YES'
else:
	print 'NO' 
