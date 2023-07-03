n = int(input())
s = input()

a = set()
x, y = 0, 0
a.add((0, 0))

for i in s:
    if i == 'R':
        x += 1
    if i == "L":
        x -= 1
    if i == "U":
        y += 1
    if i == "D":
        y -= 1
    
    if (x, y) in a:
        print("Yes")
        exit()
    a.add((x, y))
print("No")