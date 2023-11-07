#include <bits/stdc++.h>
using namespace std;

/*
  素数判定
*/
bool is_prime(long long n){
  if (n == 1) return false;
  for (long long i = 2; i * i <= n; i++){
    if (n % i == 0){
      return false;
    }
  }
  return true;
}

/*
  約数列挙
*/
vector<long long> enum_divisors(long long n){
  vector<long long> res;
  for (int i = 1; i * i <= n; i++){
    if(n % i == 0){
      res.push_back(i);
      if(n / i != i){
        res.push_back(n / i);
      }
    }
  }
  sort(res.begin(), res.end());
  return res;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    long long n;
    cin >> n;

    return 0;
}

