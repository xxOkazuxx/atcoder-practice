n = int(input())
l = []
while n > 0:
    l.append(n % 2)
    n //= 2
while len(l) < 10:
    l.append(0)
new_l = l[::-1]
for i in range(len(l)):
    print(new_l[i], end='')