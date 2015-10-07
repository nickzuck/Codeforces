a = raw_input()
#the capslock was turned on accidently
if (a.upper() == a or a[0].upper()+a[1:] == a.upper()):
	print ''.join(i.lower() if i.isupper() else i.upper() for i in a)
else:
	print a 

   