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
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
#define rrep(i, n) for (int i = (int)(n) - 1; i >= 0; i--)
#define rrep2(i, n, s) for (int i = (int)(n) - 1; i >= (int)(s); i--)
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define len(x) ((int)(x).size())
#define YesNo(condition) cout << (condition ? "Yes" : "No") << '\n'
#define print(x) cout << x << '\n'

// const
const int inf = INT_MAX / 2;
const ll INF = 1LL << 60;
const double PI = acos(-1);
// const int dx[4] = {1, 0, -1, 0};
// const int dy[4] = {0, 1, 0, -1};
// const int dx[8] = {1, 1, 0, -1, -1, -1, 0, 1};
// const int dy[8] = {0, 1, 1, 1, 0, -1, -1, -1};

// input -> ex) IN(int, n, k)
void in_impl() {};
template <typename T, typename... TS>
void in_impl(T& head, TS&... tail) {
    cin >> head;
    in_impl(tail...);
}
#define IN(T, ...) \
    T __VA_ARGS__; \
    in_impl(__VA_ARGS__);

// print pair
template <typename T1, typename T2>
std::ostream& operator<<(std::ostream& os, std::pair<T1, T2> p) {
    os << "{" << p.first << "," << p.second << "}";
    return os;
}

// print vector
template <typename T>
inline void print_vec(const vector<T>& v, bool split_line = false) {
    if (v.empty()) {
        cout << "This vector is empty." << endl;
        return;
    }
    constexpr bool isValue = is_integral<T>::value;
    for (int i = 0; i < (int)v.size(); i++) {
        if constexpr (isValue) {
            if ((v[i] == inf) || (v[i] == INF))
                cout << 'x' << " \n"[split_line || i + 1 == (int)v.size()];
            else
                cout << v[i] << " \n"[split_line || i + 1 == (int)v.size()];
        } else
            cout << v[i] << " \n"[split_line || i + 1 == (int)v.size()];
    }
}

// chmax, chmin
template <typename T1, typename T2>
inline bool chmax(T1& a, T2 b) {
    return a < b ? a = b, true : false;
}
template <typename T1, typename T2>
inline bool chmin(T1& a, T2 b) {
    return a > b ? a = b, true : false;
}

/*
 *     ##  ##  #######   ####     ####     #####            ##   ##   #####   ######    ####    ######
 *     ##  ##   ##  ##    ##       ##     ##   ##           ##   ##  ##   ##   ##  ##    ##      ##  ##
 *     ##  ##   ##        ##       ##     ##   ##           ##   ##  ##   ##   ##  ##    ##      ##  ##
 *     ######   ####      ##       ##     ##   ##           ## # ##  ##   ##   #####     ##      ##  ##
 *     ##  ##   ##        ##       ##     ##   ##           #######  ##   ##   ####      ##      ##  ##
 *     ##  ##   ##  ##    ## ##    ## ##  ##   ##    ##     ### ###  ##   ##   ## ##     ## ##   ##  ##
 *     ##  ##  #######   ######   ######   #####     ##     ##   ##   #####   ###  ##   ######  ######
 */
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    // cout << setprecision(16) << fixed;

    return 0;
}
