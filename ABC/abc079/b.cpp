#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)
typedef long long ll;
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1;} return 0;}
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1;} return 0;}
const ll INF = 1LL << 60;

ll lucas(int n){
	vector<ll> a(n+:);
	a[0] = 2;
	a[1] = 1;
	int i = 2;
	for(int i = 2; i <= n; ++i){
		a[i] = a[i-1] + a[i-2];
	}
	return a[n];
}

int main(){
	int n; cin >> n;
	cout << lucas(n) << endl;

}
