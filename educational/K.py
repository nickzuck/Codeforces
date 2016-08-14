# IDEA : Principle of inclusion and exclusion
from math import sqrt
n = input()
temp = n/2 + n/3 + n/5 + n/7 
temp -= (n/6 + n/10 + n/14 + n/15 + n/21 + n/35)
temp += (n/30 + n/42 + n/105 + n/70)
temp -= n/210
ans = n - temp
print ans
