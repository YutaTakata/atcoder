#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < (int)(n); ++i)
typedef long long ll;


int main(){
    ll a, b, x; cin >> a >> b >> x;
    auto d = [&](ll x){
        ll res = 0;
        while(x){
            x /= 10;
            res++;
        }
        return res;
    };

    auto f = [&](ll x){
        return a * x + b * d(x);
    };
    ll l = 0; ll r = 1e9+1;

    while (r-l > 1)
    {
        ll mid = (r + l)/2;
        if(f(mid) <= x) l = mid;
        else r = mid;
    }
    cout << l << endl;
    
}