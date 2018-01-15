k = input()
s = raw_input()
n = len(s)
present = []
points = []
for i in range(n):
    if s[i] not in present :
        present.append(s[i])
        points.append(i)
chrs = len(present)
if k > chrs:
    print "NO"
else:
    print "YES"
    counter = 0 
    points_len = len(points)
    while(k > 0):
        # print "counter, points len", counter, points_len
        if counter < points_len -1 and k > 1:
            # print "here"
            start = points[counter]
            end = points[counter+1]-1
            counter += 1
        else:
            start = points[counter]
            end = n-1
            counter += 1
        k -= 1
        # print start, end
        print s[start:end+1]
