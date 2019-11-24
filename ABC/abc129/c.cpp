#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < (int)(n); ++i)
typedef long long ll;
const int MOD = 1e9+7;

int main(){
    int N, M; cin >> N >> M;

    vector<bool> a(N+1, true);
    rep(i, M){
        int b; cin >> b;
        a[b] = false;
    }

    vector<ll> dp(N+1, 0);
    dp[0] = 1;
    if(a[1]) dp[1] = 1;

    for (int i = 2; i <= N; ++i){
        if(a[i-1]) dp[i] += dp[i-1];
        if(a[i-2]) dp[i] += dp[i-2];
        dp[i] %= MOD;
        
    }
    cout << dp[N] << endl;
}