import itertools

s, k = input().split()
k = int(k)
s_set = set()

# sの文字列の長さ分の順列を作成
for p in itertools.permutations(range(len(s))):
    s_tmp = ""
    # s_tmpにsの各文字を並び変えたものを格納
    for i in p:
        s_tmp += s[i]
    s_set.add(s_tmp)

s_list = list(s_set)
s_list.sort()
print(s_list[k - 1])