n, k = map(int, input().split())
s = input()

finalist = []
ans = []

for i in range(n):
    if len(finalist) == k:
        break
    if s[i] == 'o':
        finalist.append(i)

for i in range(n):
    if i in finalist:
        ans.append('o')
    else:
        ans.append('x')

print(''.join(ans))