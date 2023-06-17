#include <bits/stdc++.h>
#define rep(i, a) for(int i = 0; i < a; i++)
using namespace std;

int main(){
    int n, m, h, k;
    cin >> n >> m >> h >> k;

    string s;
    cin >> s;

    vector<int> x(m);
    vector<int> y(m);
    rep(i, m) cin >> x[i] >> y[i];

    for(int i = 0; i < n; i++){
        if(s[i] == 'R') cout << 'R' << endl;
        if(s[i] == 'L') cout << 'L' << endl;
        if(s[i] == 'U') cout << 'U' << endl;
        if(s[i] == 'D') cout << 'D' << endl;
    }
    return 0;
}
