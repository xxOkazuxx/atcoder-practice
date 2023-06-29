h, w = map(int, input().split())
s = []
# 4方向のgridについて探索
grid_x = [-1, 0, 1, 0]
grid_y = [0, -1, 0, 1]

for i in range(h):
    s.append(input())

for i in range(h):
    for j in range(w):
        cookies = 0
        for k in range(4):
            x = i + grid_x[k]
            y = j + grid_y[k]
            if (x > h - 1) or (y > w - 1) or (x < 0) or (y < 0):
                continue
            if s[i][j] == '#':
                continue

            # '.'に対して周りの状況を調査
            if s[i][j] == '.' and s[x][y] == '#':
                cookies += 1
            if cookies >= 2:
                print(i + 1, j + 1)
                exit()