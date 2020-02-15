#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)
typedef long long ll;
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1;} return 0;}
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1;} return 0;}
const ll INF = 1LL << 60;

int main(){
	int n, k;
	cin >> n >> k;
	int x[n];
	for(int i = 0; i < n; ++i) cin >> x[i];
	int ans = 0;
	for(int i = 0; i < n; ++i){
		ans += min(x[i], k - x[i]) * 2;
	}
	cout << ans << endl;
}
