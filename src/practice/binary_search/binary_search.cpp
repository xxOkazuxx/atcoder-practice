#include <bits/stdc++.h>
using namespace std;

/*
    二分探索
    - 目的の値の最小のIndexを返す（ない場合は-1）
    - leftは「常に」条件を満たさない
    - rightは「常に」条件を満たす
*/
bool isOk(vector<int> a, int index, int key) {
    if (a[index] >= key)
        return true;
    else
        return false;
}

int binary_search(vector<int> a, int key) {
    int left = -1;
    int right = (int)a.size();
    while (right - left > 1) {
        int mid = left + (right - left) / 2;
        if (isOk(a, mid, key))
            right = mid;
        else
            left = mid;
    }
    return right;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    vector<int> a = {10, 30, 35, 50, 50, 75};
    int place = binary_search(a, 50);

    cout << place << endl;

    return 0;
}
