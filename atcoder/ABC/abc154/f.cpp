#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
static const int INF = 1e9 + 7;
#define rep(i, n) for(int i = 0; i < (n); ++i)


int main(){
    ll r1, c1, r2, c2; cin >> r1 >> c1 >> r2 >> c2;
    vector<vector<ll>> f(c2+1, vector<ll>(r2+1, 1));
    for(int i = 1; i <= c2; ++i){
        for(int j = 1; j <= r2; ++j){
            f[i][j] = f[i-1][j] + f[i][j-1] % INF;
        }
    }
    ll ans = 0;
    for(int i = c1; i <= c2; ++i){
        for(int j = r1; j <= r2; ++j){
            ans += f[i][j];
            ans %= INF;
        }
    }
    cout << ans << endl;
}