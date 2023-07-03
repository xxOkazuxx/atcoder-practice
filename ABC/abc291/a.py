S = input()
ans = 0
upper_list = []
for i in range(65, 91):
    upper_list.append(chr(i))

for i in range(len(S)):
    if S[i] in upper_list:
        ans = i + 1
print(ans)