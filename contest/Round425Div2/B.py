good = list(raw_input())
string = raw_input()
sLen = len(string)
n = input()
for i in range(n):
    inp = raw_input()
    inpLen = len(inp)
    flag = True
    if inpLen > sLen: 
        flag = False 
        print "NO"
        continue 
    else:
        i = 0 
        while (i < inpLen):
            if inp[i] != string[i]:
                if string[i] == '?':
                    if inp[i] in good:
                        i += 1
                        continue
                    else:
                        flag = False 
                        break 
                elif string[i] == "*":
                    if inp[i] in good:
                        flag = False 
                        break 
                    else:
                        i += 1
                        continue
                else:
                    flag = False
                    break
            i += 1

        for j in range(i, sLen):
            if string[j] != '*':
                flag = False
                break 

        if not flag :
            print ("NO")
        else:
            print ("YES")

