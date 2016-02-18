def gcd(a, b):
    if b== 0 :
        return a 
    else:
        return gcd(b, a%b)

def lcm(a ):
    res = 1 
    for i in a:
        res = ((res*i)/(gcd(i, res)))
    return res 

print lcm([2, 3, 4, 5, 6, 7, 8, 9 , 10])
