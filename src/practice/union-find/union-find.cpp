#include <bits/stdc++.h>
using namespace std;

struct UnionFind {
    vector<int> parent;  // parent[i]: iの親の番号 (例) parent[3] = 2 -> 3の親が2

    UnionFind(int N) : parent(N) {  // 最初は全てが根であるとして初期化
        for (int i = 0; i < N; i++)
            parent[i] = i;
    }

    int root(int x) {  // データxが属する木の根を再帰で得る：root(x) = {xの木の根}
        if (parent[x] == x)
            return x;
        return parent[x] = root(parent[x]);
    }

    void unite(int x, int y) {  // xとyの木を併合
        int rx = root(x);       // xの根をrx
        int ry = root(y);       // xの根をry
        if (rx == ry)
            return;  // xとyの根が同じ(=同じ木にある)ときはそのまま
        parent[rx] = ry;
    }

    bool same(int x, int y) {
        int rx = root(x);
        int ry = root(y);
        return rx == ry;
    }
};

// AtCoder Typical Contest 001 Union Find
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, q;
    cin >> n >> q;
    UnionFind tree(n);
    for (int i = 0; i < q; i++) {
        int p, a, b;
        cin >> p >> a >> b;
        if (p == 0) {
            tree.unite(a, b);
        }
        if (p == 1) {
            if (tree.same(a, b))
                cout << "Yes" << endl;
            else
                cout << "No" << endl;
        }
    }
    return 0;
}
