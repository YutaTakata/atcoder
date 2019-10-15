#include <bits/stdc++.h>
using namespace std;

int main(){
	int i, j, n, ans = 0;
	cin >> n;
	int cnt[2][105] = {0};
	for(i = 0; i < 2; ++i){
		for( j = 1; j <= n; ++j ){
			cin >> cnt[i][j];
			cnt[i][j] += cnt[i][j-1];
		}
	}
	for(i = 1; i <= n; ++i){
		ans = max(ans, cnt[0][i] + cnt[1][n] - cnt[1][i-1]);
	}
	cout << ans << endl;
	return 0;
}
