n, m = map(int, input().split())
s = []
t = []
ans = 0
for _ in range(n):
    num = input()
    tail = num[-3:]
    s.append(tail)

for _ in range(m):
    t.append(input())
    
for i in range(n):
    for j in range(m):
        if s[i] == t[j]:
            ans += 1
            break

print(ans)