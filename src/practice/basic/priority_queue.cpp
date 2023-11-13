#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    priority_queue<int> q;                              // 降順: [2, 1, -1]
    priority_queue<int, vector<int>, greater<int>> qq;  // 昇順: [-1, 1, 2]

    q.push(1);
    q.push(2);
    q.push(-1);

    qq.push(1);
    qq.push(2);
    qq.push(-1);

    cout << q.size() << endl;

    cout << q.top() << endl;
    cout << qq.top() << endl;

    q.pop();

    cout << q.size() << endl;
    cout << q.top() << endl;

    return 0;
}
