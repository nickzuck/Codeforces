total = 0 
inroom = 0 
while(True):
    try:
        s = raw_input()
    except EOFError:
        break 
    if s:
        if(s[0] == '-'):
            inroom -=1
        elif(s[0] == '+'):
            inroom += 1
        else:
            total += len(s.split(":")[1])*inroom
print total
