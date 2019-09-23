import re
r = re.compile('[ \t\n\r:]+')
a = input()
b=r.split(a)
x = int(b[0])
y = float(b[1])
if(x +0.5 > y or x % 5 > 0):
    print("%.2f"%y)
else:
    print(y-x-0.5)