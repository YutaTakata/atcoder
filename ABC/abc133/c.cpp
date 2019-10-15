#include <bits/stdc++.h>
using namespace std;

int main(){
	long long l, r; cin >> l >> r;
	int ans = 2019;
	if(r - l >= 2019){
		cout << 0 << endl;
		return 0;
	}
	else{
		for(long long i = l; i < r; ++i){
			for(long long j = i+1; j <= r; ++j){
				int tmp = i * j % 2019;
				ans = min(ans , tmp);
			}
		}
	}
	cout << ans << endl;
}
