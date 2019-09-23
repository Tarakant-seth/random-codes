n,k = map(int, input().split())
count = 0
for i in range(n):
    a = int(input())
    if( a % k == 0):
        count += 1
print(count)


