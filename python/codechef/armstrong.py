n = int(input())
for _ in range(n):
    a = int(input())
    num = a
    b=0
    c=""
    while(a>0):
        b = a%10
        c = c + str(b)
        a=a//10
    if(num==int(c)):
        print("wins")
    else:
        print("losses")