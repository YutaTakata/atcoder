#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for(int i = 0; i < (n); ++i)
const ll INF = 1e9 + 7;



ll exponential(ll base, ll exp){
    ll sum = 1;
    rep(i, exp){
        sum *= base;
        sum %= INF;
    }
    return sum;
}

ll factorial(ll n){
    ll sum = 1;
    for(ll i = 1; i <= n; ++i){
        sum *= i;
    }
    return sum;
}

int main(){
	    ll N, A, B; cin >> N >> A >> B;
        ll nCa = factorial(N) / (factorial(A) * factorial(N - A)) % INF;
        ll nCb = factorial(N) / (factorial(B) * factorial(N - B)) % INF;
        ll ans = (exponential(2, N) - nCa - nCb) % INF;
        if(N == 2) cout << 0 << endl;
        else{
            cout << ans << endl;
        }
}
