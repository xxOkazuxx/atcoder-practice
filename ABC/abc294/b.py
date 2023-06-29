def to_alphabet(num: int):
    return chr(int(num) + 64)

h, w = map(int, input().split())
a = []
for i in range(h):
    a.append(input().split())

for i in range(h):
    for j in range(w):
        number = a[i][j]
        if a[i][j] == '0':
            a[i][j] = '.'
        else:
            a[i][j] = to_alphabet(a[i][j])

for i in range(h):
    print("".join(a[i]))