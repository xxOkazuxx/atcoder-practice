n = int(input())
a = [int(a) - 1 for a in input().split()]

called = [False for _ in range(n)]
for i, b in enumerate(a):
    if not called[i]:
        called[b] = True

ans = 0
table = []
for i in range(n):
    if called[i]:
        continue
    ans += 1
    table.append(i + 1)

print(ans)
print(*table)