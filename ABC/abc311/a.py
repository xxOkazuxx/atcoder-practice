n = int(input())
s = input()
a = 0
b = 0
c = 0

for i in range(n):
    if s[i] == 'A':
        a += 1
    elif s[i] == 'B':
        b += 1
    elif s[i] == 'C':
        c += 1
    
    if a >= 1 and b >= 1 and c >= 1:
        print(i + 1)
        exit()