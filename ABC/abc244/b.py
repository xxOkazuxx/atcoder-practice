n = int(input())
t = input()

# 初期位置
x = 0
y = 0
d = 0

for i in range(n):
    if t[i] == 'S':
        if d == 0:
            x += 1
        elif d == 1:
            y -= 1
        elif d == 2:
            x -= 1
        else:
            y += 1
    if t[i] == 'R':
        d = (d + 1) % 4
print(x, y)