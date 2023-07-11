#-------------------------------------------------------------------------------------
# itertools
#-------------------------------------------------------------------------------------
import itertools


n, k = 4, 2

# 順列: permutations (range(start, end + 1))
print("[順列]")
count1 = 0
for p in itertools.permutations(range(n)):
    count1 += 1 
    print(p)
print(f"順列の総数: {count1}\n")

# 重複なしの組み合わせ: combinations (range(start, end + 1), 取る個数)
print("[重複なしの組み合わせ]")
count2 = 0
for p in itertools.combinations(range(n), k):
    count2 += 1
    print(p)
print(f"重複なしの組み合わせの総数: {count2}\n")

# 重複ありの組み合わせ: combinations_with_rep (range(start, end + 1), 取る個数)
print("[重複ありの組み合わせ]")
count3 = 0
for p in itertools.combinations_with_replacement(range(n), k):
    count3 += 1
    print(p)
print(f"重複ありの組み合わせの総数: {count3}\n")

# 直積: product (range(start, end + 1), range(start, end + 1))
print("[直積]")
count4 = 0
for p in itertools.product(range(n), range(n)):
    count4 += 1
    print(p)
print(f"直積の総数: {count4}\n")