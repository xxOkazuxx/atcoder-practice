r, c = map(int, input().split())
b = []
for _ in range(r):
    a = [b for b in input()]
    b.append(a)

for i in range(r):
    for j in range(c):
        if b[i][j] == '.' or b[i][j] == '#':
            continue
        current = int(b[i][j])
        b[i][j] = '.'
        for x in range(-current, current + 1):
            for y in range(-current, current + 1):
                if abs(x) + abs(y) > current:
                    continue
                dx = i + x
                dy = j + y
                if 0 <= dx < r and 0 <= dy < c and b[dx][dy] == '#':
                    b[dx][dy] = '.'

for i in range(r):
    print("".join(b[i]))