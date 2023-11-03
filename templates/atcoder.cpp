#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define len(x) ll((x).size())
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep(i, a, b) for (int i = (int)(a); i < (int)(b); i++)
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

  return 0;
}
