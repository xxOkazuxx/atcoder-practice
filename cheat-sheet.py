#-------------------------------------------------------------------------------------
# directionは4つの可能な方向を示す（右、左、上、下）
direction_1 = [[0, 1], [0, -1], [1, 0], [-1, 0]]

# directionは8つの可能な方向を示す（右、左、上、下、右上、右下、左上、左下）
direction_2 = [[0, 1], [0, -1], [1, 0], [-1, 0], [1, 1], [1, -1], [-1 ,1], [-1, -1]]
#-------------------------------------------------------------------------------------
# itertolls 数列の順列や組み合わせなどを作ることができるライブラリ
# 順列：permutations(range(始まり,終わり+1))
# 重複なしの組み合わせ：combinations(range(始まり,終わり+1),取る個数)
# 重複ありの組み合わせ：combinations_with_rep(range(始まり,終わり+1),取る個数)
# 直積：product(range(始まり,終わり+1),range(始まり,終わり+1)):
import itertools
 
N,K=4,2
 
# 順列：permutations(range(N))
# seq=(0,1,2,3),(0,1,3,2),(0,2,1,3),(0,2,3,1),...,(3,2,1,0)
print("[順列]")
for seq in itertools.permutations(range(N)):
    print(seq)
 
# 重複なしの組み合わせ：combinations(range(N),K)
print("[重複なしの組み合わせ]")
# seq=(0,1),(0,2),(0,3),(1,2)...,(2,3)
for seq in itertools.combinations(range(N),K):
    print(seq)
 
# 重複ありの組み合わせ：combinations_with_rep(range(N),K)
print("[重複ありの組み合わせ]")
# seq=(0,0),(0,1),(0,2),(0,3),(1,1)...,(3,3)
for seq in itertools.combinations_with_replacement(range(N),K):
    print(seq)
 
# 直積：product(range(N),range(N)):
print("[直積]")
# seq=(0,0),(0,1),(0,2),(0,3),(1,0)...,(3,3)
for seq in itertools.product(range(N),range(N)):
    print(seq)

#(1,1,1),(1,1,2),---,(9,9,9)
# for p in itertools.combinations_with_replacement(range(1,10),3):
# (1,2,3),(1,2,4),---,(7,8,9)
# for p in itertools.combinations(range(1,10),3):
#(1,1),(1,2),(1,3),(2,1),(2,2),---(3,3)
# for p in itertools.product(range(1,4),range(1,4)):
#(1,2,3),(1,3,2),(2,1,3),(2,3,1),---,(3,2,1)
# for p in itertools.permutations(range(1,4)):

#-------------------------------------------------------------------------------------
# 素因数分解
# Nの素因数分解
# N=1の場合は空のリストを返す
def PrimeFactorize(N):
    # もしN=1ならば
    if N == 1:
        # 空のリストを返す
        return []        
    # 素因数を格納するリスト
    p = []
    # i=2,3,4,...で試し割り
    i = 2
    # i≤√Nすなわちi**2≤Nの範囲で試し割り
    while i ** 2 <= N:
        # もしiで割り切れたら
        if N % i == 0:
            # iを素因数に追加
            p.append(i)
            # Nをiで割る
            N //= i
        # iで割り切れなかったら
        else:
            # 次のiへ
            i += 1
    # 試し割りが終わった時Nが1でなければ
    if N != 1:
        # 素因数にNを追加
        p.append(N)
    # 素因数のリストを返す
    return p
#-------------------------------------------------------------------------------------
