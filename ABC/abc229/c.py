n, w = map(int, input().split())
cheese = []
ans = 0
for i in range(n):
    a, b = map(int, input().split())
    cheese.append([a, b])

cheese.sort(reverse=True)

for i in range(n):
    delicious = cheese[i][0]
    weight = cheese[i][1]

    if weight <= w:
        ans += delicious * weight
        w -= weight
    else:
        ans += delicious * w
        break
print(ans)