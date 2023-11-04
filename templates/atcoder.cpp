#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define vi vector<int>
#define vll vector<long long>
#define vs vector<string>
#define len(x) ll((x).size())
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define repp(i, a, b) for (int i = (int)(a); i < (int)(b); i++)
#define print(x) cout << (x) << endl

#define all(v) v.begin(), v.end()
/*
  vector<int> v = {2, 3, 1}
  sort(all(v))
*/

const int dx[4] = {1, 0, -1, 0};
const int dy[4] = {0, 1, 0, -1};
const ll INF = 1LL << 60;
const ll MOD = 1000000007;

int ctoi(char c) { return int(c - '0'); }

void ssort(string &s) { sort(begin(s), end(s)); }

long long GCD(long long a, long long b) {
  if (b == 0)
    return a;
  else
    return GCD(b, a % b);
}

long long LCM(long long a, long long b) { return a / GCD(a, b) * b; }

/*
  素因数分解
  - pair<long long, long long>型の配列を返す
  - 素因数と個数のペアで構成されている
*/
// vector<pair<long long, long long>> prime_factorize(long long N) {
//   vector<pair<long long, long long>> res;
//   for (long long a = 2; a * a <= N; ++a) {
//     if (N % a != 0)
//       continue;
//     long long ex = 0;
//     while (N % a == 0) {
//       ++ex;
//       N /= a;
//     }
//     res.push_back({a, ex});
//   }
//   if (N != 1)
//     res.push_back({N, 1});
//   return res;
// }

/*
  二分探索
  - 目的の値の最小のIndexを返す（ない場合は-1）
  - leftは「常に」条件を満たさない
  - rightは「常に」条件を満たす
*/
// bool isOk(vector<int> a, int index, int key) {
//   if (a[index] >= key)
//     return true;
//   else
//     return false;
// }

// int binary_search(vector<int> a, int key) {
//   int left = -1;
//   int right = (int)a.size();
//   while (right - left > 1) {
//     int mid = left + (right - left) / 2;
//     if (isOk(a, mid, key))
//       right = mid;
//     else
//       left = mid;
//   }
//   return right;
// }

// エラトステネスの篩
// const int n = pow(10, 5);
// vector<bool> isp(n + 1, true);

// void sieve() {
//   isp[0] = false;
//   isp[1] = false;
//   for (int i = 2; pow(i, 2) <= n; i++) {
//     if (isp[i]) {
//       for (int j = 2; i * j <= n; j++) {
//         isp[i * j] = false;
//       }
//     }
//   }
// }

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  return 0;
}
