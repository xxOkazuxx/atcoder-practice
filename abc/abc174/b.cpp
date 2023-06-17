#include <bits/stdc++.h>
#define rep(i, a) for(int i = 0; i < a; i++)
#define ll long long
using namespace std;

int main(){
    ll n, d;
    cin >> n >> d;
    ll x[n], y[n];
    rep(i, n) cin >> x[i] >> y[i];
    int ans = 0;

    rep(i, n) {
        if(sqrt((x[i]*x[i]) + (y[i]*y[i])) <= d){
            ans++;
        }
    }
    cout << ans << endl;

    return 0;
}