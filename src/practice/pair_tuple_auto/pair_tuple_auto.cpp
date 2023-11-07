#include <bits/stdc++.h>
using namespace std;

/*
  pair型
*/
void pair_print() { 
  pair<string, int> p("abc", 3); // 初期化
  cout << p.first << endl;

  p.first = "Hello";
  cout << p.first << endl; // 1つ目の値 first
  cout << p.second << endl; // 2つ目の値 second

  p = make_pair("*", 1); // pairの生成

  string s;
  int a;
  tie(s, a) = p; // pairの分解
  cout << s << endl;
  cout << a << endl;
}

/*
  tuple型
*/
void tuple_print() { 
  tuple<int, string, bool> data(1, "hello", true); // 初期化(型は必要なだけ書く)
  get<2>(data) = false; // get<k>(tuple型の変数) : k(定数)番目にアクセス
  cout << get<1>(data) << endl;

  data = make_tuple(2, "WORLD", true);

  int a;
  string s;
  bool f;
  tie(a, s, f) = data; // tieの分解
  cout << a << " " << s << " " << f << endl;
}

void sort_tuple(){
  vector<tuple<int, int, int>> a;
  a.push_back(make_tuple(3, 1, 1));
  a.push_back(make_tuple(3, 5, 2));
  a.push_back(make_tuple(1, 2, 100));
  a.push_back(make_tuple(3, 5, 1));
  a.push_back(make_tuple(1, 2, 3));
  sort(a.begin(), a.end());

  for(tuple<int, int, int> s : a){
    int x, y, z;
    tie(x, y, z) = s;
    cout << x << " " << y << " " << z << endl;
  }
}

/*
  tuple<string, int, int>にて
  - 第一引数は昇順ソート
  - 第二引数は降順ソート
*/
// bool compareTuples(const tuple<string, int, int>& a, const tuple<string, int, int>& b) {
//     // まず第一引数のstringを辞書順に比較
//     if (get<0>(a) != get<0>(b)) {
//         return get<0>(a) < get<0>(b);
//     }
//     // 第一引数のstringが同じ場合、第二引数のintを大きい順に比較
//     return get<1>(a) > get<1>(b);
// }

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    pair_print();
    tuple_print();
    sort_tuple();

    return 0;
}

