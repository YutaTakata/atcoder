#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for(int i = 0; i < (n); ++i)
const ll INF = 1LL << 60;

int main(){
	int n;
	int a[30], b[30], c[30];
	cin >> n;
	rep(i, n) cin >> a[i];
	rep(i, n) cin >> b[i];
	rep(i, n-1) cin >> c[i];
	int ans = 0;
	rep(i, n){
		ans += b[i];
	}
	rep(i, n-1){
		if((a[i] + 1) == a[i+1]) ans += c[a[i] - 1];
	}
	cout << ans << endl;
}
