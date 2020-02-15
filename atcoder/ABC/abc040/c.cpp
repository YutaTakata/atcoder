#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)
typedef long long ll;
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1;} return 0;}
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1;} return 0;}
const ll INF = 1LL << 60;

int main(){
	int n;
	cin >> n;
	int h[100010];
	rep(i, n) cin >> h[i];
	int dp[100010];
	rep(i, n) dp[i] = 0;
	dp[0] = 0;
	dp[1] = abs(h[1] - h[0]);
	for(int i = 2; i < n; ++i){
		int one = dp[i-1] + abs(h[i] - h[i-1]);
		int two = dp[i-2] + abs(h[i] - h[i-2]);
		dp[i] = min(one, two);
	}
	cout << dp[n-1] << endl;
}
