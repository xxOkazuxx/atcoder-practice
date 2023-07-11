#-------------------------------------------------------------------------------------
# Union Find
#-------------------------------------------------------------------------------------
from collections import defaultdict


class UnionFind(object):
    def __init__(self, n):
        self.n = n
        self.parents = [-1] * n

    # 要素xが属するグループの根を返す
    def find(self, x: int) -> int:
        if self.parents[x] < 0:
            return x
        else:
            self.parents[x] = self.find(self.parents[x])
            return self.parents[x]

    # 要素xが属するグループと要素yが属するグループとを併合する
    def union(self, x: int, y: int) -> None:
        x = self.find(x)
        y = self.find(y)

        if x == y:
            return

        if self.parents[x] > self.parents[y]:
            x, y = y, x

        self.parents[x] += self.parents[y]
        self.parents[y] = x

    # 要素xが属するグループのサイズ（要素数）を返す
    def size(self, x: int) -> int:
        return -self.parents[self.find(x)]

    # 要素x, yが同じグループに属するかどうかを返す
    def same(self, x: int, y: int) -> bool:
        return self.find(x) == self.find(y)

    # 要素xが属するグループに属する要素をリストで返す
    # その後に行う処理によっては集合内包表記やジェネレータ式を使う方が効率的となるパターンもある
    def members(self, x: int) -> list:
        root = self.find(x)
        return [i for i in range(self.n) if self.find(i) == root]

    # 全ての根の要素をリストで返す
    def roots(self) -> list:
        return [i for i, x in enumerate(self.parents) if x < 0]

    # グループの数を返す
    def group_count(self) -> int:
        return len(self.roots())

    # {ルート要素: [そのグループに含まれる要素のリスト, ...]}のdefaultdictを返す
    def all_group_members(self) -> dict:
        group_members = defaultdict(list)
        for member in range(self.n):
            group_members[self.find(member)].append(member)
        return group_members

    # printでの表示用
    # ルート要素: [そのグループに含まれる要素のリスト]を文字列で返す
    def __str__(self):
        return '\n'.join(f'{r}: {m}' for r, m in self.all_group_members().items())


uf = UnionFind(6)
uf.union(0, 1)
uf.union(1, 2)
uf.union(0, 3)
print(uf)