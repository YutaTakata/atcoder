#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)
typedef long long ll;
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1;} return 0;}
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1;} return 0;}
const ll INF = 1LL << 60;

int main(){
	int n, d, x; cin >> n >> d >> x;
	int sum = x;
	for( int i = 0; i < n; ++i ){
		int tmp; cin >> tmp;
		sum += (d - 1)/tmp + 1;
	}
	cout << sum << endl;
}
