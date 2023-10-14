n = int(input())
ss = ''
sum = 0

for i in range(n+1):
    ss += str(i)

for i in range(len(ss)):
    if i&1: sum += int(ss[i])
    else: sum -= int(ss[i])

print(sum)