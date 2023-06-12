#include <bits/stdc++.h>
#define rep(i, a) for(int i = 0; i < a; i++)
#define ll long long
using namespace std;

// 要復習
int main(){
    int n;
    cin >> n;
    string s;
    cin >> s;
    int a = 0;
    int t = 0;
    rep(i, n){
        if(s[i] == 'A'){
            a++;
        } 
        if(s[i] == 'T'){
            t++;
        } 
    }
    if(a > t) {
        cout << "A" << endl;
    }else if(a < t) {
        cout << "T" << endl;
    }else if(a == t){
        if(s.back() == 'A') cout << "T" << endl;
        if(s.back() == 'T') cout << "A" << endl;
    }
    return 0;
}
