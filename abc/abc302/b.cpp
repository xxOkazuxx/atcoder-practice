#include <iostream>
#include <vector>
#include <algorithm>
#define rep(i, a) for(int i = 0; i < a; i++)
#define ll long long
using namespace std;
 
int dx[] = {-1, -1, -1, 0, 0, 1, 1, 1};
int dy[] = {-1, 0, 1, -1, 1, -1, 0, 1};
 
int main(){
    int h, w, x, y;
    cin >> h >> w;
    vector<string> s(h);
    string T = "snuke";
 
    for(int i = 0; i < h; i++) cin >> s[i];
 
    for(int i = 0; i < h; i++){
        for(int j = 0; j < w; j++){
            for(int k = 0; k < 8; k++){
                string ans = "";
                for(int l = 0; l < 5; l++){
                    x = i + dx[k] * l;
                    y = j + dy[k] * l;
                    if(x < 0 || y < 0 || x >= h || y >= w) break;
                    ans += s[x][y];
                }
                if(ans == T){
                    for(int l = 0; l < 5; l++){
                        x = i + dx[k] * l + 1;
                        y = j + dy[k] * l + 1;
                        cout << x << " " << y << endl;
                    }
                }
            } 
        }
    }
 
    return 0;
}