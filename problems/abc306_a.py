n = int(input())
s1 = input()
s2 = s1
ans =""

for i in range(n):
    ans += s1[i] + s2[i]

print(ans)