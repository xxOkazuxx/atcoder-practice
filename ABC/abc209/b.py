n, x = map(int, input().split())
a = list(map(int, input().split()))
price = 0

for i in range(n):
    if i % 2 == 1:
        a[i] -= 1
    price += a[i]

if price > x:
    print("No")
else:
    print("Yes")