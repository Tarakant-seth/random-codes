t = int(input())
fac =[]
fa = 1
for i in range(t):
    f = int(input())
    for j in range(1,(f+1)):
        fa = fa*j
    fac.append(fa)
    fa = 1
for k in fac:
    print(k)