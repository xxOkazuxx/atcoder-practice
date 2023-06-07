#include <bits/stdc++.h>
#define rep(i, a) for(int i = 0; i < a; i++)
#define ll long long
using namespace std;

// 要復習
int main(){
    int k;
    cin >> k;
    int a[1000001];
    a[1] = 7 % k;
    for(int i = 2; i <= k; i++){
        a[i] = (a[i - 1] * 10 + 7) % k;
    }
    for(int i = 1; i <= k; i++){
        if(a[i] == 0) {
            cout << i << endl;
            return 0;
        }
    }
    cout << -1 << endl;
    return 0;
}