#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

// const int dx[4] = {1, 0, -1, 0};
// const int dy[4] = {0, 1, 0, -1};
const ll INF = 1LL << 60;
const ll MOD = 1000000007;

template <class T>
using P = pair<T, T>;

int dx[] = {1, 0, -1, 0, 1, 1, -1, -1};
int dy[] = {0, 1, 0, -1, 1, -1, 1, -1};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int h, w;
    cin >> h >> w;
    vector<string> s(h);
    rep(i, h) {
        cin >> s[i];
    }

    int ans = 0;
    vector<vector<bool>> used(h, vector<bool>(w, false));

    rep(i, h) rep(j, w) {
        if (s[i][j] == '.' || used[i][j]) {
            continue;
        }

        queue<P<int>> que;
        que.push({i, j});
        while (!que.empty()) {
            P<int> p = que.front();
            que.pop();
            int x = p.first;
            int y = p.second;
            rep(d, 8) {
                int nx = x + dx[d];
                int ny = y + dy[d];
                if (0 <= nx && nx < h && 0 <= ny && ny < w && s[nx][ny] == '#' && !used[nx][ny]) {
                    used[nx][ny] = true;
                    que.push({nx, ny});
                }
            }
        }
        ans++;
    }

    // // Debug
    // for (auto& str : s) {
    //     cout << str << endl;
    // }

    cout << ans << endl;
    return 0;
}
