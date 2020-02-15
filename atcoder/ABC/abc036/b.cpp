#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)
typedef long long ll;
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1;} return 0;}
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1;} return 0;}
const ll INF = 1LL << 60;

int main(){
	int n; cin >> n;
	char a[n][n], b[n][n];
	rep(i, n){
		rep(j, n){
			cin >> a[i][j];
			b[j][n-1-i] = a[i][j];
		}
	}
	rep(i, n){
		rep(j, n){
			cout << b[i][j];
		}
		cout << endl;
	}
}
