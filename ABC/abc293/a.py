s = input()
l = []

for i in range(len(s)):
    l.append(s[i])

for i in range(0, len(l), 2):
    l[i], l[i+1] = l[i+1], l[i]

for i in range(len(l)):
    print(l[i], end="")