t = int(input())
s=[]
for i in range(t):
    a = int(input())
    b = [1,2,4,8,16,32,64,128,256,512,1024,2048]
    j,k = 11,0
    while a!=0:
        if(b[j]<= a):
            a -=b[j]
            k +=1
        else:
            j-=1
    s.append(k)
for l in s:
    print(l)