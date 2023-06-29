a = input().split()
a = a[::-1]
base = ""
for i in range(len(a)):
    base += a[i]


print(int(base, 2))