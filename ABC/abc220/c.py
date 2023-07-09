n = int(input())
a = list(map(int, input().split()))
x = int(input())

a_sum = 0
for i in range(n):
    a_sum += a[i]

cnt = x // a_sum
tmp_cnt = a_sum * cnt

ans = len(a) * cnt
i = 0
while tmp_cnt <= x:
    ans += 1
    tmp_cnt += a[i]
    i += 1

print(ans)