n = int(input())
for_num = 0

for _ in range(n):
    s = input()
    if s == 'For':
        for_num += 1

if for_num >= n // 2 + 1:
    print("Yes")
else:
    print("No")