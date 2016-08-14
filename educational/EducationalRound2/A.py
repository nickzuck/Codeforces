import re
s = raw_input()
words = re.split(",|;", s)
arr1 = []
arr2 = []
for i in words:
    try:
        v = int(i)
        if v >= 0 :
            if i[0] != '0' :
                arr1.append(i)
            elif len(i) <= 1:
                arr1.append(i)
            else:
                arr2.append(i)
        else:
            arr2.append(i)

    except(ValueError):
        arr2.append(i)
        

if len(arr1) > 0:
    print "\"" + ",".join(arr1) + "\""
else:
    print "-"
if len(arr2) > 0:
    print "\"" + ",".join(arr2) + "\""
else:
    print "-"
