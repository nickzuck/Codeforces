def returnXor(a):
    xor = a[0]
    for i in range(1, len(a)):
        xor ^= a[i]

    return xor

n = input()
a = map(int, raw_input().split())
b = map(int, raw_input().split())
c = map(int, raw_input().split())

a_xor = returnXor(a)
b_xor = returnXor(b)
c_xor = returnXor(c)

print a_xor ^ b_xor
print b_xor ^ c_xor
