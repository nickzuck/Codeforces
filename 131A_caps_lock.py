a = raw_input()
if (a.upper() == a or a[0].upper()+a[1:] == a.upper()):
	b = a.lower()
	b = b[1:]
	print "%s%s" %(a[0].upper(),b)
else:
	print a