#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)
typedef long long ll;
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1;} return 0;}
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1;} return 0;}
const ll INF = 1LL << 60;

int main(){
	int n, m; cin >> n >> m;
	priority_queue<ll> q;
	rep(i, n){
		ll tmp; cin >> tmp;
		q.push(tmp);
	}
	for(int i = 0; i < m; ++i){
		ll tmp = q.top();
		q.pop();
		tmp /= 2;
		q.push(tmp);
	}
	ll ans = 0;
	for(int i = 0; i < n; ++i){
		ans += q.top();
		q.pop();
	}
	cout << ans << endl;
}
