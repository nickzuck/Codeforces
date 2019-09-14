# URL :  http://codeforces.com/contest/1166/problem/A

def calculateTakingScore(n):
    if n <= 2 :
        return 0
    elif n%2 == 0 :
        return (n/2)*((n/2)-1)
    else :
        return ( ((n-1)/2) * ((n-1)/2 - 1))/2 + (((n+1)/2) * ((n+1)/2 - 1)/2 )

t = int(input())
d = {}
while(t > 0):
    t -= 1 
    s = input()
    firstChar = s[0]
    if firstChar in d :
        d[firstChar] += 1 
    else:
        d[firstChar] = 1 

sun = 0 
for _, key in enumerate(d):
    temp = calculateTakingScore(d[key])
    # print (key, temp)
    sun += temp

print (int(sun))