#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)
typedef long long ll;
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1;} return 0;}
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1;} return 0;}
const ll INF = 1LL << 60;

int main(){
	int n; cin >> n;
	int ans = 20000000;
	for(int i = 1; i <= n; ++i){
		for(int j = 1; j <= n; ++j){
			int square = i * j;
			int res = n - square;
			int absv = abs(i - j);
			if(square > n) break;
			else{
				ans = min(absv+res, ans);
			}
		}
	}
	cout << ans << endl;
}
