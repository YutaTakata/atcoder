#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for(int i = 0; i < (n); ++i)

int main(){
	int n;
	ll h[110000];
	cin >> n;
	int cnt = 0;
	int ans = 0;
	rep(i, n){
		cin >> h[i];
	}
	rep(i, n - 1){
		if(h[i] >= h[i + 1]) cnt++;
		else{
			ans = max(ans, cnt);
			cnt = 0;
		}
	}
	ans = max(ans, cnt);
	cout << ans << endl;
}
