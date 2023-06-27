#include <bits/stdc++.h>
#define rep(i, a) for(int i = 0; i < a; i++)
#define ll long long
using namespace std;

int main(){
    ll n;
    cin >> n;
    vector<int> a(n);
    rep(i, n) cin >> a[i];

    ll num1 = 0;
    ll num2 = 0;
    ll num3 = 0;
    ll num4 = 0;
    
    ll ans;

    for(int i = 0; i < n; i++) {
        if(a[i] == 100) num1++;
        if(a[i] == 200) num2++;
        if(a[i] == 300) num3++;
        if(a[i] == 400) num4++;
    }
    ans = (num1 * num4) + (num2 * num3);
    cout << ans << endl;

    return 0;
}