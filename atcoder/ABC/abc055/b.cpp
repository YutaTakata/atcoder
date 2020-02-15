#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	int inf = 1e09 + 7;
	cin >> n;
	long long ans = 1;
	for( int i = 1; i <= n; ++i ){
		ans = ans * i % inf;
	}
	cout << ans << endl;
}
