from math import factorial as f

def C(n,r):
    a = f(n)
    b = f(n-r)
    c = f(r)
    ans = (a/(b*c))
    return ans

n = input()
finalAns = C(n,5) + C(n,6) + C(n,7)
print finalAns
