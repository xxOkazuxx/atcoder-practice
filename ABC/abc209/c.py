n = int(input())
c = list(map(int, input().split()))
mod = 10 ** 9 + 7
c.sort()

ans = 1
for i in range(n):
    if c[i] - i == 0:
        print(0)
        exit()
    ans *= c[i] - i
    ans %= mod
print(ans)