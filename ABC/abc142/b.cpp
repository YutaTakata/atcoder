#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < (int)(n); ++i)
typedef long long ll;


int main(){
    int N, K; cin >> N >> K;
    vector<int> a(N);
    rep(i, N) cin >> a[i];
    int ans = 0;
    rep(i,N){
        if(a[i] >= K) ans++;
    }
    cout << ans << endl;
}