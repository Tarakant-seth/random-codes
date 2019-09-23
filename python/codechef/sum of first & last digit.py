t = int(input())
sum = []
for i in range(t):
    a = int(input())
    b = str(a)
    count =0
    for i in range(len(b)):
        if(b[i]=='4'):
            count+=1
    s = int(b[0])+int(b[len(b)-1])
    sum.append(s)
for j in sum:
    print(j)