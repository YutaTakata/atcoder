#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)
typedef long long ll;
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1;} return 0;}
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1;} return 0;}
const ll INF = 1LL << 60;

int main(){
	int n, m;
	cin >> n >> m;
	int a[50], b[50], c[50], d[50];
	rep(i, n) cin >> a[i] >> b[i];
	rep(i, m) cin >> c[i] >> d[i];
	rep(i, n){
		int min_dist = abs(a[i] - c[0]) + abs(b[i] - d[0]), cnt = 1;

		for(int j = 1; j < m; ++j){
			int man_dist = abs(a[i] - c[j]) + abs(b[i] - d[j]);
			if(min_dist > man_dist){
				min_dist = man_dist;
				cnt = j + 1;
			}
		}
		cout << cnt << endl;
	}
}
