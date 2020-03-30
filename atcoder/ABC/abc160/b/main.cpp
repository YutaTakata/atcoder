#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for(int i = 0; i < (n); ++i)


int main(){
	    ll X; cin >> X;
        ll ans = 0;
        ans += X / 500 *1000;
        X %= 500;
        ans += X / 5 * 5;
        cout << ans << endl;
}
