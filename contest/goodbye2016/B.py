curr = 0  # North
flag = True 
for _ in range(input()):
    d, s = raw_input().split()
    if s == "North":
        if curr <= 0 :
            flag = False
        else:
            curr -= int(d)

    elif s == "South":
        if curr >= 20000:
            flag = False
        else:
            curr += int(d)
    elif s == "East" or s == "West":
        if curr >= 20000 or curr <=0 and int(d) > 0:
            flag = False

if flag :
    if curr == 0 :
        print "YES"
    else:
        print "NO"
else:
    print "NO"
