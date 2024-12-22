#include <bits/stdc++.h>

using namespace std;

// type
using ll = long long;
using ull = unsigned long long;
using vi = vector<int>;
using vvi = vector<vi>;
using vll = vector<ll>;
using vvll = vector<vll>;
using pi = pair<int, int>;
using pll = pair<ll, ll>;
using vpi = vector<pi>;
using vpll = vector<pll>;

// macro
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

// エラトステネスの篩 (素数列挙) -> O((n log log n) * n)
vi Eratosthenes(int n) {
    vi is_prime(n + 1, 1);
    is_prime[0] = 0;
    is_prime[1] = 0;
    for (int i = 2; i <= n; i++) {
        if (!is_prime[i])
            continue;
        for (int q = i * 2; q <= n; q += i) {
            is_prime[q] = 0;
        }
    }
    vi res;
    rep(i, n + 1) {
        if (is_prime[i])
            res.push_back(i);
    }
    return res;
}