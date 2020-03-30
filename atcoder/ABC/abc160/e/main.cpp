#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for(int i = 0; i < (n); ++i)


int main(){
	    int X, Y, A, B, C;
        cin >> X >> Y >> A >> B >> C;
        vector<ll> P(A), Q(B), R(C);
        int red = 0, green = 0, white = 0;
        sort(begin(P), end(P));
        reverse(begin(P), end(P));
        sort(begin(Q), end(Q));
        reverse(begin(Q), end(Q));
        sort(begin(R), end(R));
        reverse(begin(R), end(R));
        ll ans = 0;
        while(X != 0 || Y != 0){
            ll maxv = max({P[red], Q[green], R[white]});
            
        }
}
