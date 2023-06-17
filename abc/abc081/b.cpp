#include <bits/stdc++.h>
#define rep(i, a) for(int i = 0; i < a; i++)
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> a(n);
    rep(i, n) cin >> a[i];
    int ans = 0;
    while(true){
        rep(i, n){
            if(a[i] % 2 != 0){
                cout << ans << endl;
                return 0;
            }
            a[i] /= 2;
        }
        ans++;
    }
    cout << ans << endl;
    return 0;
}