import copy
# INPUT
n = int(input())
a = [list(map(int, input())) for _ in range(n)]
b = copy.deepcopy(a)

for i in range(n):
    for j in range(n):
        if i % n == 0:
            if j % n == 0:
                b[i][j] = a[i + 1][j]
            else:
                b[i][j] = a[i][j - 1]
        elif i % n == n - 1:
            if j % n == n - 1:
                b[i][j] = a[i - 1][j]
            else:
                b[i][j] = a[i][j + 1]
        elif j % n == 0:
            b[i][j] = a[i + 1][j]
        elif j % n == n - 1:
            b[i][j] = a[i - 1][j]
for i in range(n):
    print(*b[i], sep='')