n = int(input())
s = []
for i in range(n):
    string = input()
    s.append(string)
    
for i in range(n):
    print(''.join(s[n - 1 - i]))