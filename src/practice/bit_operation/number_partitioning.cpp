#include <bits/stdc++.h>
using namespace std;

void number_partitioning() {
    int n, w;
    cin >> n >> w;

    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    bool exist = false;
    for (int bit = 0; bit < (1 << n); bit++) {
        int sum = 0;
        for (int i = 0; i < (1 << i); i++) {
            // i番目に1が立っているか
            // 立っていたらその値を加算する
            if (bit & (1 << i)) {
                sum += a[i];
            }
        }
        if (sum == w)
            exist = true;
    }
    if (exist)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    number_partitioning();

    return 0;
}
