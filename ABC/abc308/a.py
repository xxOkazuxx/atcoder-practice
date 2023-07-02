s = list(map(int, input().split()))
ok = True
for i in range(len(s) -1):
    if s[i] > s[i + 1]:
        ok = False
    if s[i] < 100 or s[i] > 675:
        ok = False
    if s[i] % 25 != 0:
        ok = False
if ok == True:
    print("Yes")
else:
    print("No")