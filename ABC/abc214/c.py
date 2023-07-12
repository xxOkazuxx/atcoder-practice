n = int(input())
s = list(map(int, input().split()))
t = list(map(int, input().split()))

time = [10 ** 15] * n
for i in range(n):
    next = (i + 1) % n
    time[next] = min(t[next], time[i] + s[i])

for i in range(n):
    next = (i + 1) % n
    time[next] = min(time[next], time[i] + s[i])

for i in range(n):
    print(time[i])