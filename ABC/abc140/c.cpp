#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for(int i = 0; i < (n); ++i)
const ll INF = 1LL << 60;

int main(){
	int n;
	cin >> n;
	int a[110], b[110];
	rep(i, n){
		cin >> b[i];
	}
	int ans = 0;
	a[0] = b[0];
	a[n-1] = b[n-2];
	for(int i = 1; i <= n-2; ++i){
		a[i] = min(b[i], b[i-1]);
	}
	rep(i, n){
		ans += a[i];
	}
	cout << ans << endl;
}
