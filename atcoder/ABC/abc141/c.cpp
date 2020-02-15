#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)
typedef long long ll;
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1;} return 0;}
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1;} return 0;}
const ll INF = 1LL << 60;

int main(){
	int n, q;
	ll k;
	cin >> n >> k >> q;
	vector<ll> a(n, k);
	for(int  i = 0; i < q; i++){
		int tmp; cin >> tmp;
		a[--tmp]++;
	}
	rep(i, n){
		a[i] -= q;
		if(a[i] > 0) puts("Yes");
		else puts("No");
	}
}
