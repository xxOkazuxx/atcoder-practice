n = int(input())
s = input()

result = ""
i = 0
while i < len(s):
    if i < len(s) - 1 and s[i : i + 2] == "na":
        result += "nya"
        i += 2
    else:
        result += s[i]
        i += 1

print(result)