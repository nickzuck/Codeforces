from math import factorial as f
def C(n, k):
    if n == k :
        return 1
    else:
        return (f(n)/(f(n-k)*f(k)))

n = input()
print  C(n, 5) + C(n,6) + C(n,7)
