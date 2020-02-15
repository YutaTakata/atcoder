#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < (int)(n); ++i)
typedef long long ll;


ll GCD(ll a, ll b){
    if(a < b) swap(a, b);
    if(a % b == 0) return (b);
    else{
        GCD(b, a % b);
    }
}

vector<ll> divisor(ll n){
    vector<ll> ret;
    for(ll i = 1; i * i <= n; ++i){
        if(n % i == 0 ){
            ret.push_back(i);
            if(i * i != n) ret.push_back(n/i);
        }
    }
    sort(begin(ret), end(ret));
    return (ret);
}

bool is_prime(ll x){
    if(x < 2) return false;
    else if(x == 2) return true;
    else if(x % 2 == 0) return false;
    for(ll i = 3; i * i <= x; ++i)
    {
        if(x % i == 0) return false;
    }
    return true;
}

int main(){
    ll a, b; cin >> a >> b;
    ll gcd = GCD(a, b);
    vector<ll> divisors = divisor(gcd);
    ll ans = 1;
    for(auto d: divisors){
        if(is_prime(d)) ans++;
    }

    cout << ans << endl;
}