#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)
typedef long long ll;

int main(){
	int n;
	cin >> n;
	int ans = 0;
	int v[25], c[25];
	rep(i, n){
		cin >> v[i];
	}
	rep(i, n) cin >> c[i];
	rep(i, n){
		ans += max(0, v[i] - c[i]);
	}
	cout << ans << endl;
}
