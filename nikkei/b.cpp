#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < (int)(n); ++i)
typedef long long ll;

constexpr int INF = 998244353;

vector<int> a, b;

int main(){
    int N; cin >> N;
    a.resize(N);
    b.resize(N);

    rep(i, N){
        cin >> a[i];
        b[a[i]]++;
    }
    if(a[0] != 0 || b[0] > 1){
        cout << 0 << endl;
        return 0;
    }

    int maxv = *max_element(begin(a), end(a));
    ll ans = 1;
    for(int i = 1; i < maxv; ++i){
        rep(j, b[i+1]){
            ans *= b[i];
            ans %= INF;
        }
    }

    cout << ans << endl;

}