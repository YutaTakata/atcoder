#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < (int)(n); ++i)
typedef long long ll;


int main(){
    int N, X; cin >> N >> X;
    vector<int> a(N);
    rep(i, N) cin >> a[i];

    int ans = 0;
    for(int i = 0; i < N; ++i){
        if(X & (1<<i)){
            ans += a[i];
        }
    }

    cout << ans << endl;
}