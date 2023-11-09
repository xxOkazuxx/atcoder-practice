#include <bits/stdc++.h>
using namespace std;

/*
  素数判定
*/
bool is_prime(long long n) {
    if (n == 1)
        return false;
    for (long long i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

/*
  約数列挙
*/
vector<long long> enum_divisors(long long n) {
    vector<long long> res;
    for (int i = 1; i * i <= n; i++) {
        if (n % i == 0) {
            res.push_back(i);
            if (n / i != i) {
                res.push_back(n / i);
            }
        }
    }
    sort(res.begin(), res.end());
    return res;
}

/*
  エラトステネスの篩
*/
const int n = pow(10, 5);
vector<bool> isp(n + 1, true);

void sieve() {
    isp[0] = false;
    isp[1] = false;
    for (int i = 2; pow(i, 2) <= n; i++) {
        if (isp[i]) {
            for (int j = 2; i * j <= n; j++) {
                isp[i * j] = false;
            }
        }
    }
}

/*
  素因数分解
  - pair<long long, long long>型の配列を返す
  - 素因数と個数のペアで構成されている
*/
vector<pair<long long, long long>> prime_factorize(long long N) {
    vector<pair<long long, long long>> res;
    for (long long a = 2; a * a <= N; ++a) {
        if (N % a != 0)
            continue;
        long long ex = 0;
        while (N % a == 0) {
            ++ex;
            N /= a;
        }
        res.push_back({a, ex});
    }
    if (N != 1)
        res.push_back({N, 1});
    return res;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    long long n;
    cin >> n;

    return 0;
}
