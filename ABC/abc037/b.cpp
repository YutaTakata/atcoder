#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)
typedef long long ll;
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1;} return 0;}
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1;} return 0;}
const ll INF = 1LL << 60;

int main(){
	int n, q;
	cin >> n >> q;
	vector<int> d(n, 0);
	rep(i, q){
		int a, b, c;
		cin >> a >> b >> c;
		a--; b--;
		for(int j = a; j <= b; ++j){
			d[j] = c;
		}
	}
	rep(i, n) cout << d[i] << endl;
}
