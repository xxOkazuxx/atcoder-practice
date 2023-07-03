n = int(input())
l = [i for i in map(int, input().split())]
l.sort()

for i in range(n):
    l.pop(-1)
    l.pop(0)

sum = 0
for i in range(len(l)):
    sum += l[i]

print(sum / len(l))