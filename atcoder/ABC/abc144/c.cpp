#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < (int)(n); ++i)
typedef long long ll;


int main(){
    ll N; cin >> N;
    ll ans = 1e13;
    for(int i = 1; i <=                    sqrt(N); ++i){
        if(N % i == 0){
            ll tmp = i + N/i -2;
            ans = min(ans, tmp);
        }
    }
    cout << ans << endl;
}