n = int(input())
s = input()

for i in range(1, n):
    ans = 0
    for j in range(1, n):
        if i + j > n:
            break
        
        if s[j - 1] != s[j + i - 1]:
            ans = j
        else:
            break
    print(ans)