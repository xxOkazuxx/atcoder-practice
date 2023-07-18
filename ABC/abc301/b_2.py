n = int(input())
a = list(map(int, input().split()))

tmp = []
tmp.append(a[0])
for i in range(n - 1):
    tail = tmp[-1]
    # 同じ数字のときはそのまま追加
    if tail == a[i + 1]:
        tmp.append(a[i + 1])

    if tail - 1 >= a[i + 1]:
        while tail - 1 >= a[i + 1]:
            tmp.append(tail - 1)
            tail -= 1

    if tail <= a[i + 1] - 1:
        while tail <= a[i + 1] - 1:
            tmp.append(tail + 1)
            tail += 1
print(*tmp)