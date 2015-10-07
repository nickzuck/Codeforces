a = raw_input()
if(a.upper()== a):
	b = a.lower() 
	c = a[0].upper()
	d = c+b[1:]
	d = d.strip()
	print d 
elif(a[0].islower()):
	b = a[1:]
	if (b.upper() == b):
		c = a.lower()
		d = a[0].upper()
		d = d+c[1:]
		d = d.strip()
		print d
	else :
		print a
else:
	print "yes kahan pahunch gaya"
	print a		
	