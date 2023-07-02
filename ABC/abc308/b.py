n, m = map(int, input().split())
c = list(input().split())
d = list(input().split())
p = list(map(int, input().split()))

dic = dict()
for i in range(m):
    dic[d[i]] = p[i + 1]

ans = 0
for i in c:
    if i in dic:
        ans += dic[i]
    else:
        ans += p[0]
print(ans)