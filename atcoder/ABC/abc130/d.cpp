#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < (int)(n); ++i)
typedef long long ll;

int N;
ll K;
vector<ll> a;

int main(){
    cin >> N >> K;
    a.resize(N);
    rep(i, N) cin >> a[i];
    ll ans = 0;
    ll sum = 0;

    int r = 0;
    for(int l = 0; l < N; ++l){
        while(sum < K){
            if(r == N) break;
            else{
                sum += a[r];
                r++;
            }
        }
        if(sum < K) break;
        ans += N - r +1;
        sum -= a[l];
    }
    cout << ans << endl;
}