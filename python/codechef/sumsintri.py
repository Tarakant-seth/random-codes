n = int(input())
for a in range(n):
    n = int(input())
    s=[]
    for i in range(n):
        s.append([int(x) for x in input().split()])
    for i in range(n-2, -1, -1):
        for j in range(len(s[i])):
            s[i][j]+=max(s[i+1][j], s[i+1][j+1])
    print(s[0][0])