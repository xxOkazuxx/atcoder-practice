#include <bits/stdc++.h>
#define rep(i, a) for(int i = 0; i < a; i++)
#define ll long long
using namespace std;

int main(){
    int n;
    cin >> n;
    int a[101];
    for(int i = 0; i < n; i++) cin >> a[i];
    ll ans = 0;
    for(int i = 0; i < n; i++){
        for(int j = i + 1; j < n; j++){
            for(int k = j + 1; k < n; k++){
                for(int l = k + 1; l < n; l++){
                    for(int m = l + 1; m < n; m++){
                        if(a[i] + a[j] + a[k] + a[l] + a[m] == 1000) ans++;
                    }
                }
            }
        }
    }
    cout << ans << endl;
    return 0;
}