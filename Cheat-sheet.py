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
#-------------------------------------------------------------------------------------
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
#-------------------------------------------------------------------------------------
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
# Union Find
#-------------------------------------------------------------------------------------
from collections import defaultdict


class UnionFind():
    def __init__(self, n):
        self.n = n
        self.parents = [-1] * n

    def find(self, x):
        if self.parents[x] < 0:
            return x
        else:
            self.parents[x] = self.find(self.parents[x])
            return self.parents[x]

    def union(self, x, y):
        x = self.find(x)
        y = self.find(y)

        if x == y:
            return

        if self.parents[x] > self.parents[y]:
            x, y = y, x

        self.parents[x] += self.parents[y]
        self.parents[y] = x

    def size(self, x):
        return -self.parents[self.find(x)]

    def same(self, x, y):
        return self.find(x) == self.find(y)

    def members(self, x):
        root = self.find(x)
        return [i for i in range(self.n) if self.find(i) == root]

    def roots(self):
        return [i for i, x in enumerate(self.parents) if x < 0]

    def group_count(self):
        return len(self.roots())

    def all_group_members(self):
        group_members = defaultdict(list)
        for member in range(self.n):
            group_members[self.find(member)].append(member)
        return group_members

    def __str__(self):
        return '\n'.join(f'{r}: {m}' for r, m in self.all_group_members().items())

#-------------------------------------------------------------------------------------
# リストの中で連続している値の最大値
# ex) [1, 2, 3, 4, 5, 7] -> Ans) 5
#-------------------------------------------------------------------------------------
def find_longest_consecutive(nums):
    if not nums:
        return 0

    longest_streak = 1
    current_streak = 1

    for i in range(1, len(nums)):
        if nums[i] == nums[i - 1] + 1:
            current_streak += 1
        else:
            current_streak = 1
        
        longest_streak = max(longest_streak, current_streak)

    return longest_streak

# 例としてリストを与えてテスト
nums = [1, 2, 3, 4, 5, 7]
result = find_longest_consecutive(nums)
print("連続している最大の個数:", result)