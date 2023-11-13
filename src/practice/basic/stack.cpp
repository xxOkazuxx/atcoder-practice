#include <bits/stdc++.h>
using namespace std;

// LIFO(Last In, First Out)のデータ構造
// [1, 2, -1] -> top(): -1 -> pop() -> [1, 2]
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    // 変数宣言
    stack<int> st;
    st.push(1);
    cout << "要素: " << st.top() << "を追加しました。" << endl;
    st.push(2);
    cout << "要素: " << st.top() << "を追加しました。" << endl;
    st.push(-1);
    cout << "要素: " << st.top() << "を追加しました。" << endl;

    // 現在スタックに入っている要素数
    cout << "Stackの要素数: " << st.size() << endl;
    // 末尾の要素参照する
    cout << "Stackの末尾の要素: " << st.top() << endl;

    while (!st.empty()) {
        cout << "末尾の要素: " << st.top() << "を取り出しました。" << endl;
        st.pop();
    }

    return 0;
}