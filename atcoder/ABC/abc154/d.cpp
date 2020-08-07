#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for(int i = 0; i < (n); ++i)


int main(){
    ll N, K; cin >> N >> K;
    vector<int> P(N);
    rep(i, N){
        cin >> P[i];
    }
    vector<double> exp(N, 0);
    rep(i, N){
        exp[i] = (P[i] + 1) / 2.0;
    }
    vector<double> cnt(N+1, 0);
    for(int i = 1; i <= N; ++i){
        cnt[i] = cnt[i-1] + exp[i-1];
    }
    double ans = cnt[K] - cnt[0];
    for(int i = K+1; i <= N; ++i){
        double tmp = cnt[i] - cnt[i - K];
        ans = max(tmp, ans);
    }
    cout << setprecision(8);
    cout << fixed;
    cout << ans << endl;
}