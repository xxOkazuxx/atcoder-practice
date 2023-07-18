n, k = map(int, input().split())
S = []
for _ in range(n):
    S.append(input())
new_s = S[:k]
new_s.sort()

for i in range(k):
    print(new_s[i])