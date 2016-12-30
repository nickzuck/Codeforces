curr = 0 ;
flag = True 
for _ in range(input()):
    d, s = raw_input().split()
    if s == "North":
        if curr <= 0 :
            flag = False
        curr -= int(d)

    elif s == "South":
        if curr >= 20000:
            flag = False
        curr += int(d)
    else:
        if curr >= 20000 or curr <=0:
            flag = False

if flag :
    if curr == 0 :
        print "YES"
    else:
        print "NO"
else:
    print "NO"
