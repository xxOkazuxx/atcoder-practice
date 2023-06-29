from collections import defaultdict

n = int(input())
a = list(map(int, input().split()))
ans = []

d = defaultdict(list)
for i in range(n * 3):
    d[a[i]].append(i + 1)
for i in d:
    d[i].sort()
    ans.append([d[i][1], i])
ans.sort()
for i in ans:
    print(i[1], end=" ")