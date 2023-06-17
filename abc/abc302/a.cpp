#include <iostream>
#include <algorithm>
#define rep(i,a,b) for(int i=a;i<b;i++)
#define ll long long
using namespace std;
 
int main(){
    ll a,b;
    cin>>a>>b;
 
    if(a%b==0){
        cout << a / b <<endl;
    }else{
        cout << (a / b) + 1 << endl;
    }
}