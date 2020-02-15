#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < (int)(n); ++i)
typedef long long ll;

int gcd(ll a, ll b){
    if(a < b) swap(a, b);
    if(a % b == 0){
        return(b);
    }
    else{
        return(gcd(b, a%b));
    }
}

int main(){
    ll A, B; cin >> A >> B;
    ll x = gcd(A, B);
    ll ans = A / x * B;
    cout << ans << endl;
}