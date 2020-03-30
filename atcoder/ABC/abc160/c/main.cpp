#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for(int i = 0; i < (n); ++i)


int main(){
	    ll K, N; cin >> K >> N;
        vector<ll> A(N);
        rep(i, N) cin >> A[i];

        ll ans = min(A[N-1] - A[0], K - A[1] + A[0]);
        for(int i = 1; i < N-1; ++i){
            ans = min({ans, K - A[i] + A[i-1], K - A[i+1] + A[i]});
        }
        cout << ans << endl;
}
