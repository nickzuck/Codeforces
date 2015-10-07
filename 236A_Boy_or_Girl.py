from itertools import groupby
s = raw_input() 
unique_char = ''.join(k for k, g in groupby(sorted(s)))
length = len(unique_char)
if(length % 2 == 0 ):
	print 'CHAT WITH HER!'
else:
	print 'IGNORE HIM!'