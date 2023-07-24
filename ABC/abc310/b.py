n, m = map(int, input().split())
p = []
c = []
f = []
for i in range(n):
    P, C, *F = map(int, input().split())
    p.append(P)
    c.append(C)
    se = set()
    for el in F:
        se.add(el)
    f.append(se)

for i in range(n):
    for j in range(n):
        if i == j:
            continue
        # 1つめの条件, p[i] >= p[j]
        if p[i] < p[j]:
            continue
        
        # 2つ目の条件, j番目の製品はi番目の製品が持つ機能をすべてもつ
        is_ok = True
        for el in f[i]:
            if el not in f[j]:
                is_ok = False
        if not is_ok:
            continue
        
        # 3つ目の条件, p[i] > p[j] or j番目の製品はi番目の製品にない機能を1つ以上持つ
        if p[i] > p[j]:
            print("Yes")
            exit()
        for el in f[j]:
            if el not in f[i]:
                print("Yes")
                exit()
print("No")