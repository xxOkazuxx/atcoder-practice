n = int(input())
s = []
for i in range(n):
    s.append(input())

for i in range(n - 1):
    for j in range(i + 1, n):
        if i == j:
            break
        new_string = s[i] + s[j]
        new_string_2 = s[j] + s[i]
        if new_string == new_string[::-1] or new_string_2 == new_string_2[::-1]:
            print("Yes")
            exit()
print("No")