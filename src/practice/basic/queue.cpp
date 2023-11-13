#include <bits/stdc++.h>
using namespace std;

// FIFO(First In, First Out)のデータ構造
// [1, 2, -1] -> top(): 1, back(): -1 -> pop() -> [2, -1]
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    queue<int> q;

    q.push(1);
    cout << "要素: " << q.back() << "を追加しました。" << endl;
    q.push(2);
    cout << "要素: " << q.back() << "を追加しました。" << endl;
    q.push(-1);
    cout << "要素: " << q.back() << "を追加しました。" << endl;

    cout << "Queueの要素数: " << q.size() << endl;
    cout << "Queueの先頭の要素: " << q.front() << endl;
    cout << "Queueの末尾の要素: " << q.back() << endl;

    while (!q.empty()) {
        cout << "末尾の要素: " << q.front() << "を取り出しました。" << endl;
        // 先頭の要素を取り出す
        q.pop();
    }

    cout << endl;

    return 0;
}
