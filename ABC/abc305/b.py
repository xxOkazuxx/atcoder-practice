p,q = map(str, input().split())
dict = {"A": 0, "B": 3, "C": 4, "D": 8, "E": 9, "F": 14, "G": 23}

if q > p:
    p, q = q, p

print(dict[p] - dict[q])