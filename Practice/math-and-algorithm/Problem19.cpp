#include <bits/stdc++.h>
#define rep(i, a) for(int i = 0; i < a; i++)
#define ll long long
using namespace std;

int main(){
    ll n;
    cin >> n;
    vector<int> a(n);
    rep(i, n) cin >> a[i];
    ll red = 0;
    ll yellow = 0;
    ll blue = 0;

    for(int i = 0; i < n; i++){
        if(a[i] == 1) red++;
        if(a[i] == 2) yellow++;
        if(a[i] == 3) blue++;
    }

    ll ans = (red * (red - 1) / 2) + (yellow * (yellow - 1) / 2) + (blue * (blue - 1) / 2);
    cout << ans << endl;
    return 0;
}