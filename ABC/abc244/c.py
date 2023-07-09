n = int(input())
used_num = [False] * (2 * n + 2)
print(1)
used_num[1] = True

for i in range(n + 1):
    x = int(input())
    used_num[x] = True
    
    if x == 0:
        exit()
    
    for k in range(1, 2 * n + 2):
        if used_num[k] == False:
            print(k)
            used_num[k] = True
            break
