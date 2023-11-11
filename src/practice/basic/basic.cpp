#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    // 変数宣言（空）
    string s;
    // 文字数を確認
    cout << s.size() << endl;  // 0
    s = "plan";
    cout << s.size() << endl;  // 4
    // 先頭・末尾の文字を参照
    cout << s.front() << " " << s.back() << endl;  // p n
    // 文字列の結合
    s += "et";
    cout << s << endl;  // planet
    // 末尾の文字を削除
    s.pop_back();
    cout << s << endl;  // plane

    s = "plan1plan";
    // 文字列を前方から検索(find)
    auto itr = s.find("lan");
    if (itr != string::npos)
        cout << itr << endl;  // 1
    else
        cout << "Nout Found" << endl;
    // 文字列を後方から検索(rfind)
    itr = s.rfind("lan");
    if (itr != string::npos)
        cout << itr << endl;  // 6
    else
        cout << "Nout Found" << endl;

    return 0;
}
